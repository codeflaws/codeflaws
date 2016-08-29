int NRows;
int MColums;
int NoMatches;
int Operations[10000][4];
int Cells[100][100];
void SetCell(int pos){
    Cells[Operations[pos][1]-1][Operations[pos][2]-1] = Operations[pos][3];
}
void Row(int pos) {
    int i;
    int NumRow = Operations[pos][1]-1;
    int first = Cells[NumRow][MColums-1];
    for (i = MColums-2; i >= 0; i--) {
        Cells[NumRow][i+1] = Cells[NumRow][i];
    }
    Cells[NumRow][0] = first;
}
void Colum(int pos) {
    int i;
    int NumCol = Operations[pos][1]-1;
    int first = Cells[NRows-1][NumCol];
    for (i = NRows-2; i >= 0; i--) {
        Cells[i+1][NumCol] = Cells[i][NumCol];

    }
    Cells[0][NumCol] = first;
}
void print() {
    int i, j;
    for (i = 0; i< NRows; i++) {
        for (j = 0; j < MColums; j++) printf("%d ", Cells[i][j]);
        printf("\n");

    }
    printf("\n");
}
int main(int argc, char *argv[]) {
    scanf("%d%d%d", &NRows, &MColums, &NoMatches);
    int i, j;
    for (i = 0; i < NoMatches; i++) {
        scanf("%d", &Operations[i][0]);

        if (Operations[i][0] == 3) {
            for (j = 1; j < 4; j++) scanf("%d", &Operations[i][j]);

        } else {
            for (j = 1; j < 2; j++) scanf("%d", &Operations[i][j]);
        }
    }


    for (i = NoMatches-1; i >= 0 && Operations[i][0] != 3; i--);
    for (i; i >= 0; i--) {
        if (Operations[i][0] == 3) {
            SetCell(i);

        }
        else if (Operations[i][0] == 1) { Row(i);} else {
            Colum(i);

        }
    }

    print();



    return 0;
}
