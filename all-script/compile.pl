#!/usr/bin/perl -w
# Script for compiling genprog
use strict ;
use File::Basename ;

#flatten the path
$ARGV[0]  =~ s/\/[.]\//\//g ;
my $subdir = basename(dirname($ARGV[0])) ;
my $project = "codeflaws" ;
my $project_list = "bugged-program.txt" ;


sub say {
    my $msg = $_[0];
    print STDERR "|[$0]|: $msg \n" ;
}
sub execute 
{
    my $cmd = $_[0] ;
    my $res = system($cmd) >> 8 ;
    if ($res != 0)
    {
        print STDERR "Command '$cmd' failed: $!" ; 
        
    }
}
sub make
{
    #Note that the following replacement are required to fix the weird compilation error caused by GenProg coverage instrumentation
    system("sed -i '/booo/d' *.c");
    system("sed -i '/booo/d' *.cil.c");
    system("sed -i 's/pf/printf/g' *.c");
    my $res = system("make 2>&1") >> 8 ;
    
    if ($res == 0)
    {
        exit 0;
    }
    print "Failed to make";
    exit 1;
}
# We want to change /home/mkd5m/genprog-many-bugs/grep-A-B/sanity/repair.sanity.c into sanity

my $do_coverage = ($subdir =~ m/coverage/) ;

open(FILE, "<$project_list") ;
my @repair_only = <FILE> ;
chomp @repair_only ;
my %pfiles= map { $_, 1 } @repair_only ;
close(FILE) ;
my @all = () ;

foreach my $file (grep (! m/coverage[.]path/, `find $subdir`))
{
    chomp $file ;
    if (-f $file && ! ($file =~ m/coverage[.]path/))
    {
        $file =~ s/^[^\/]*\/// ;
        push(@all, $file) ;
    }
}
my @coverage_only = () ;
foreach my $file (@all)
{
    chomp $file ;
    if (! exists($pfiles{$file}))
    {
        push(@coverage_only, $file)
    }
}
print "Coverage only: @coverage_only\n" ;
print "Repair files: @repair_only\n" ;
print "Allfiles: @all\n" ;
foreach my $file (@coverage_only)
{
    #system("sed -i '/booo/d' $project/$file");
    print "mv $project/$file $project/$file-temp\n" ;
    execute("mv $project/$file $project/$file-temp") ;

}
my @to_copy = $do_coverage? @all : @repair_only ;

foreach my $file(@to_copy)
{
   
   (-f "$subdir/$file") or die "Invalid file to copy: $subdir/$file" ;
   execute("cp $subdir/$file $file") ;
   open(my $fileh,  "<",  $file)  or die "Can't open input.txt: $!";
 my $string = "booo";
 while (<$fileh>)  {
 if (/$string/)
 {
   my $filename = 'bugreport.txt';
   open(my $fh, '>', $filename) or die "Could not open file '$filename' $!";
   print $fh "BOOO found\n";
   close $fh;
   print "BOOO\n";
 }
}
close $fileh
}

#chdir $project or die "fail chdir $project: $!" ;
make () ;
chdir ".." or die "failed chdir ..: $!" ;
foreach my $file (@coverage_only)
{
    print "mv $file-temp file\n" ;
    execute("mv $file-temp $file") ;

}
