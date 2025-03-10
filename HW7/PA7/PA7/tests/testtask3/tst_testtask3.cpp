#include "tst_testtask3.h"

#include "regularroundwindow.h"
#include "ui_roundwindow.h"
#include "letterbox.h"

#define BOX(X, Y) dynamic_cast<LetterBox*>(curRound.ui->gridLayoutBox->itemAtPosition(X, Y)->widget())
#define KEY_PRESS(X) QTest::keyClick(&curRound, Qt::Key_##X)
#define DEL_PRESS    QTest::keyClick(&curRound, Qt::Key_Delete)
#define ENT_PRESS    QTest::keyClick(&curRound, Qt::Key_Return)

void TestTask3::testKeyPresses() {
    RegularRoundWindow curRound {nullptr, 5, false};


    KEY_PRESS(A);
    QCOMPARE(BOX(0, 0)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(0, 0)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(0, 0)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(0, 0)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(0, 0)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(0, 0)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(0, 0)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(0, 0)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(0, 0)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(0, 0)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(0, 0)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(0, 0)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(0, 0)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(0, 0)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(0, 0)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(0, 0)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(0, 0)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(0, 0)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(0, 0)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(0, 0)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(0, 0)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(0, 0)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(0, 0)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(0, 0)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(0, 0)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(0, 0)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(0, 0)->getLetter(), ' ');
    KEY_PRESS(A);

    KEY_PRESS(A);
    QCOMPARE(BOX(0, 1)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(0, 1)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(0, 1)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(0, 1)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(0, 1)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(0, 1)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(0, 1)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(0, 1)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(0, 1)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(0, 1)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(0, 1)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(0, 1)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(0, 1)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(0, 1)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(0, 1)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(0, 1)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(0, 1)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(0, 1)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(0, 1)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(0, 1)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(0, 1)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(0, 1)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(0, 1)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(0, 1)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(0, 1)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(0, 1)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(0, 2)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(0, 2)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(0, 2)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(0, 2)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(0, 2)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(0, 2)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(0, 2)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(0, 2)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(0, 2)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(0, 2)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(0, 2)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(0, 2)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(0, 2)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(0, 2)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(0, 2)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(0, 2)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(0, 2)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(0, 2)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(0, 2)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(0, 2)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(0, 2)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(0, 2)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(0, 2)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(0, 2)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(0, 2)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(0, 2)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(0, 2)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(0, 3)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(0, 3)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(0, 3)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(0, 3)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(0, 3)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(0, 3)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(0, 3)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(0, 3)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(0, 3)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(0, 3)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(0, 3)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(0, 3)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(0, 3)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(0, 3)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(0, 3)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(0, 3)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(0, 3)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(0, 3)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(0, 3)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(0, 3)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(0, 3)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(0, 3)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(0, 3)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(0, 3)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(0, 3)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(0, 3)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(0, 3)->getLetter(), ' ');
    KEY_PRESS(L);

    KEY_PRESS(A);
    QCOMPARE(BOX(0, 4)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(0, 4)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(0, 4)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(0, 4)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(0, 4)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(0, 4)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(0, 4)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(0, 4)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(0, 4)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(0, 4)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(0, 4)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(0, 4)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(0, 4)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(0, 4)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(0, 4)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(0, 4)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(0, 4)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(0, 4)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(0, 4)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(0, 4)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(0, 4)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(0, 4)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(0, 4)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(0, 4)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(0, 4)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(0, 4)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');
    KEY_PRESS(E);
ENT_PRESS;

    KEY_PRESS(A);
    QCOMPARE(BOX(1, 0)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(1, 0)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(1, 0)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(1, 0)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(1, 0)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(1, 0)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(1, 0)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(1, 0)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(1, 0)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(1, 0)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(1, 0)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(1, 0)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(1, 0)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(1, 0)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(1, 0)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(1, 0)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(1, 0)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(1, 0)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(1, 0)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(1, 0)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(1, 0)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(1, 0)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(1, 0)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(1, 0)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(1, 0)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(1, 0)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(1, 0)->getLetter(), ' ');
    KEY_PRESS(A);

    KEY_PRESS(A);
    QCOMPARE(BOX(1, 1)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(1, 1)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(1, 1)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(1, 1)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(1, 1)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(1, 1)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(1, 1)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(1, 1)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(1, 1)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(1, 1)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(1, 1)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(1, 1)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(1, 1)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(1, 1)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(1, 1)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(1, 1)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(1, 1)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(1, 1)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(1, 1)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(1, 1)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(1, 1)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(1, 1)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(1, 1)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(1, 1)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(1, 1)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(1, 1)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(1, 1)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(1, 2)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(1, 2)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(1, 2)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(1, 2)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(1, 2)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(1, 2)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(1, 2)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(1, 2)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(1, 2)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(1, 2)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(1, 2)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(1, 2)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(1, 2)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(1, 2)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(1, 2)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(1, 2)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(1, 2)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(1, 2)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(1, 2)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(1, 2)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(1, 2)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(1, 2)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(1, 2)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(1, 2)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(1, 2)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(1, 2)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(1, 2)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(1, 3)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(1, 3)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(1, 3)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(1, 3)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(1, 3)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(1, 3)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(1, 3)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(1, 3)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(1, 3)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(1, 3)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(1, 3)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(1, 3)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(1, 3)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(1, 3)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(1, 3)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(1, 3)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(1, 3)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(1, 3)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(1, 3)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(1, 3)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(1, 3)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(1, 3)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(1, 3)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(1, 3)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(1, 3)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(1, 3)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(1, 3)->getLetter(), ' ');
    KEY_PRESS(L);

    KEY_PRESS(A);
    QCOMPARE(BOX(1, 4)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(1, 4)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(1, 4)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(1, 4)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(1, 4)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(1, 4)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(1, 4)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(1, 4)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(1, 4)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(1, 4)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(1, 4)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(1, 4)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(1, 4)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(1, 4)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(1, 4)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(1, 4)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(1, 4)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(1, 4)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(1, 4)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(1, 4)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(1, 4)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(1, 4)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(1, 4)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(1, 4)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(1, 4)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(1, 4)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(1, 4)->getLetter(), ' ');
    KEY_PRESS(E);
ENT_PRESS;

    KEY_PRESS(A);
    QCOMPARE(BOX(2, 0)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(2, 0)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(2, 0)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(2, 0)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(2, 0)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(2, 0)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(2, 0)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(2, 0)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(2, 0)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(2, 0)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(2, 0)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(2, 0)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(2, 0)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(2, 0)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(2, 0)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(2, 0)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(2, 0)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(2, 0)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(2, 0)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(2, 0)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(2, 0)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(2, 0)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(2, 0)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(2, 0)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(2, 0)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(2, 0)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(2, 0)->getLetter(), ' ');
    KEY_PRESS(A);

    KEY_PRESS(A);
    QCOMPARE(BOX(2, 1)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(2, 1)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(2, 1)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(2, 1)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(2, 1)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(2, 1)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(2, 1)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(2, 1)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(2, 1)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(2, 1)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(2, 1)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(2, 1)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(2, 1)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(2, 1)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(2, 1)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(2, 1)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(2, 1)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(2, 1)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(2, 1)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(2, 1)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(2, 1)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(2, 1)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(2, 1)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(2, 1)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(2, 1)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(2, 1)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(2, 1)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(2, 2)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(2, 2)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(2, 2)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(2, 2)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(2, 2)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(2, 2)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(2, 2)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(2, 2)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(2, 2)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(2, 2)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(2, 2)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(2, 2)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(2, 2)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(2, 2)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(2, 2)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(2, 2)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(2, 2)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(2, 2)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(2, 2)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(2, 2)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(2, 2)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(2, 2)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(2, 2)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(2, 2)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(2, 2)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(2, 2)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(2, 2)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(2, 3)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(2, 3)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(2, 3)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(2, 3)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(2, 3)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(2, 3)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(2, 3)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(2, 3)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(2, 3)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(2, 3)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(2, 3)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(2, 3)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(2, 3)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(2, 3)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(2, 3)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(2, 3)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(2, 3)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(2, 3)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(2, 3)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(2, 3)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(2, 3)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(2, 3)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(2, 3)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(2, 3)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(2, 3)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(2, 3)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(2, 3)->getLetter(), ' ');
    KEY_PRESS(L);

    KEY_PRESS(A);
    QCOMPARE(BOX(2, 4)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(2, 4)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(2, 4)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(2, 4)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(2, 4)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(2, 4)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(2, 4)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(2, 4)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(2, 4)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(2, 4)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(2, 4)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(2, 4)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(2, 4)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(2, 4)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(2, 4)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(2, 4)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(2, 4)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(2, 4)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(2, 4)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(2, 4)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(2, 4)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(2, 4)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(2, 4)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(2, 4)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(2, 4)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(2, 4)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(2, 4)->getLetter(), ' ');
    KEY_PRESS(E);
ENT_PRESS;

    KEY_PRESS(A);
    QCOMPARE(BOX(3, 0)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(3, 0)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(3, 0)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(3, 0)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(3, 0)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(3, 0)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(3, 0)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(3, 0)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(3, 0)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(3, 0)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(3, 0)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(3, 0)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(3, 0)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(3, 0)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(3, 0)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(3, 0)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(3, 0)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(3, 0)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(3, 0)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(3, 0)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(3, 0)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(3, 0)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(3, 0)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(3, 0)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(3, 0)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(3, 0)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(3, 0)->getLetter(), ' ');
    KEY_PRESS(A);

    KEY_PRESS(A);
    QCOMPARE(BOX(3, 1)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(3, 1)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(3, 1)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(3, 1)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(3, 1)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(3, 1)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(3, 1)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(3, 1)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(3, 1)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(3, 1)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(3, 1)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(3, 1)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(3, 1)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(3, 1)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(3, 1)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(3, 1)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(3, 1)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(3, 1)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(3, 1)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(3, 1)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(3, 1)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(3, 1)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(3, 1)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(3, 1)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(3, 1)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(3, 1)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(3, 1)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(3, 2)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(3, 2)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(3, 2)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(3, 2)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(3, 2)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(3, 2)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(3, 2)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(3, 2)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(3, 2)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(3, 2)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(3, 2)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(3, 2)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(3, 2)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(3, 2)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(3, 2)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(3, 2)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(3, 2)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(3, 2)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(3, 2)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(3, 2)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(3, 2)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(3, 2)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(3, 2)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(3, 2)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(3, 2)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(3, 2)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(3, 2)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(3, 3)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(3, 3)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(3, 3)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(3, 3)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(3, 3)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(3, 3)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(3, 3)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(3, 3)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(3, 3)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(3, 3)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(3, 3)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(3, 3)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(3, 3)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(3, 3)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(3, 3)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(3, 3)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(3, 3)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(3, 3)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(3, 3)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(3, 3)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(3, 3)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(3, 3)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(3, 3)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(3, 3)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(3, 3)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(3, 3)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(3, 3)->getLetter(), ' ');
    KEY_PRESS(L);

    KEY_PRESS(A);
    QCOMPARE(BOX(3, 4)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(3, 4)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(3, 4)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(3, 4)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(3, 4)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(3, 4)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(3, 4)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(3, 4)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(3, 4)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(3, 4)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(3, 4)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(3, 4)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(3, 4)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(3, 4)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(3, 4)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(3, 4)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(3, 4)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(3, 4)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(3, 4)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(3, 4)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(3, 4)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(3, 4)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(3, 4)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(3, 4)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(3, 4)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(3, 4)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(3, 4)->getLetter(), ' ');
    KEY_PRESS(E);
ENT_PRESS;

    KEY_PRESS(A);
    QCOMPARE(BOX(4, 0)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(4, 0)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(4, 0)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(4, 0)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(4, 0)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(4, 0)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(4, 0)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(4, 0)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(4, 0)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(4, 0)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(4, 0)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(4, 0)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(4, 0)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(4, 0)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(4, 0)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(4, 0)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(4, 0)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(4, 0)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(4, 0)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(4, 0)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(4, 0)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(4, 0)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(4, 0)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(4, 0)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(4, 0)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(4, 0)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(4, 0)->getLetter(), ' ');
    KEY_PRESS(A);

    KEY_PRESS(A);
    QCOMPARE(BOX(4, 1)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(4, 1)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(4, 1)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(4, 1)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(4, 1)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(4, 1)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(4, 1)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(4, 1)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(4, 1)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(4, 1)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(4, 1)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(4, 1)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(4, 1)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(4, 1)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(4, 1)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(4, 1)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(4, 1)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(4, 1)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(4, 1)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(4, 1)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(4, 1)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(4, 1)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(4, 1)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(4, 1)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(4, 1)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(4, 1)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(4, 1)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(4, 2)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(4, 2)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(4, 2)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(4, 2)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(4, 2)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(4, 2)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(4, 2)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(4, 2)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(4, 2)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(4, 2)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(4, 2)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(4, 2)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(4, 2)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(4, 2)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(4, 2)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(4, 2)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(4, 2)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(4, 2)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(4, 2)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(4, 2)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(4, 2)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(4, 2)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(4, 2)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(4, 2)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(4, 2)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(4, 2)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(4, 2)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(4, 3)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(4, 3)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(4, 3)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(4, 3)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(4, 3)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(4, 3)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(4, 3)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(4, 3)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(4, 3)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(4, 3)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(4, 3)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(4, 3)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(4, 3)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(4, 3)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(4, 3)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(4, 3)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(4, 3)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(4, 3)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(4, 3)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(4, 3)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(4, 3)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(4, 3)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(4, 3)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(4, 3)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(4, 3)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(4, 3)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(4, 3)->getLetter(), ' ');
    KEY_PRESS(L);

    KEY_PRESS(A);
    QCOMPARE(BOX(4, 4)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(4, 4)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(4, 4)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(4, 4)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(4, 4)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(4, 4)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(4, 4)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(4, 4)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(4, 4)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(4, 4)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(4, 4)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(4, 4)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(4, 4)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(4, 4)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(4, 4)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(4, 4)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(4, 4)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(4, 4)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(4, 4)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(4, 4)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(4, 4)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(4, 4)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(4, 4)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(4, 4)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(4, 4)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(4, 4)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(4, 4)->getLetter(), ' ');
    KEY_PRESS(E);
ENT_PRESS;

    KEY_PRESS(A);
    QCOMPARE(BOX(5, 0)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(5, 0)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(5, 0)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(5, 0)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(5, 0)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(5, 0)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(5, 0)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(5, 0)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(5, 0)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(5, 0)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(5, 0)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(5, 0)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(5, 0)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(5, 0)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(5, 0)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(5, 0)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(5, 0)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(5, 0)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(5, 0)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(5, 0)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(5, 0)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(5, 0)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(5, 0)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(5, 0)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(5, 0)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(5, 0)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(5, 0)->getLetter(), ' ');
    KEY_PRESS(A);

    KEY_PRESS(A);
    QCOMPARE(BOX(5, 1)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(5, 1)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(5, 1)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(5, 1)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(5, 1)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(5, 1)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(5, 1)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(5, 1)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(5, 1)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(5, 1)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(5, 1)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(5, 1)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(5, 1)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(5, 1)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(5, 1)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(5, 1)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(5, 1)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(5, 1)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(5, 1)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(5, 1)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(5, 1)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(5, 1)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(5, 1)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(5, 1)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(5, 1)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(5, 1)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(5, 1)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(5, 2)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(5, 2)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(5, 2)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(5, 2)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(5, 2)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(5, 2)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(5, 2)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(5, 2)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(5, 2)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(5, 2)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(5, 2)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(5, 2)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(5, 2)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(5, 2)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(5, 2)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(5, 2)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(5, 2)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(5, 2)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(5, 2)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(5, 2)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(5, 2)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(5, 2)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(5, 2)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(5, 2)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(5, 2)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(5, 2)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(5, 2)->getLetter(), ' ');
    KEY_PRESS(P);

    KEY_PRESS(A);
    QCOMPARE(BOX(5, 3)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(5, 3)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(5, 3)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(5, 3)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(5, 3)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(5, 3)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(5, 3)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(5, 3)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(5, 3)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(5, 3)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(5, 3)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(5, 3)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(5, 3)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(5, 3)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(5, 3)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(5, 3)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(5, 3)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(5, 3)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(5, 3)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(5, 3)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(5, 3)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(5, 3)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(5, 3)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(5, 3)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(5, 3)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(5, 3)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(5, 3)->getLetter(), ' ');
    KEY_PRESS(L);

    KEY_PRESS(A);
    QCOMPARE(BOX(5, 4)->getLetter(), 'a');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(B);
    QCOMPARE(BOX(5, 4)->getLetter(), 'b');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(C);
    QCOMPARE(BOX(5, 4)->getLetter(), 'c');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(D);
    QCOMPARE(BOX(5, 4)->getLetter(), 'd');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(E);
    QCOMPARE(BOX(5, 4)->getLetter(), 'e');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(F);
    QCOMPARE(BOX(5, 4)->getLetter(), 'f');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(G);
    QCOMPARE(BOX(5, 4)->getLetter(), 'g');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(H);
    QCOMPARE(BOX(5, 4)->getLetter(), 'h');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(I);
    QCOMPARE(BOX(5, 4)->getLetter(), 'i');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(J);
    QCOMPARE(BOX(5, 4)->getLetter(), 'j');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(K);
    QCOMPARE(BOX(5, 4)->getLetter(), 'k');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(L);
    QCOMPARE(BOX(5, 4)->getLetter(), 'l');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(M);
    QCOMPARE(BOX(5, 4)->getLetter(), 'm');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(N);
    QCOMPARE(BOX(5, 4)->getLetter(), 'n');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(O);
    QCOMPARE(BOX(5, 4)->getLetter(), 'o');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(P);
    QCOMPARE(BOX(5, 4)->getLetter(), 'p');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(Q);
    QCOMPARE(BOX(5, 4)->getLetter(), 'q');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(R);
    QCOMPARE(BOX(5, 4)->getLetter(), 'r');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(S);
    QCOMPARE(BOX(5, 4)->getLetter(), 's');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(T);
    QCOMPARE(BOX(5, 4)->getLetter(), 't');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(5, 4)->getLetter(), 'u');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(V);
    QCOMPARE(BOX(5, 4)->getLetter(), 'v');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(W);
    QCOMPARE(BOX(5, 4)->getLetter(), 'w');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(X);
    QCOMPARE(BOX(5, 4)->getLetter(), 'x');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(Y);
    QCOMPARE(BOX(5, 4)->getLetter(), 'y');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');

    KEY_PRESS(Z);
    QCOMPARE(BOX(5, 4)->getLetter(), 'z');
    DEL_PRESS;
    QCOMPARE(BOX(5, 4)->getLetter(), ' ');
    KEY_PRESS(E);

}

void TestTask3::testKeyPressesWithDel() {
    RegularRoundWindow curRound {nullptr, 5, false};

    KEY_PRESS(F);
    QCOMPARE(BOX(0, 0)->getLetter(), 'f');

    KEY_PRESS(A);
    QCOMPARE(BOX(0, 1)->getLetter(), 'a');

    DEL_PRESS;
    QCOMPARE(BOX(0, 1)->getLetter(), ' ');

    KEY_PRESS(U);
    QCOMPARE(BOX(0, 1)->getLetter(), 'u');

    KEY_PRESS(N);
    QCOMPARE(BOX(0, 2)->getLetter(), 'n');

    KEY_PRESS(K);
    QCOMPARE(BOX(0, 3)->getLetter(), 'k');

    KEY_PRESS(Y);
    QCOMPARE(BOX(0, 4)->getLetter(), 'y');

    DEL_PRESS;
    QCOMPARE(BOX(0, 4)->getLetter(), ' ');
}

void TestTask3::testKeyPressesWithEnter()
{
    RegularRoundWindow curRound {nullptr, 5, false};
    curRound.wr->setAnswer("rooms");
    KEY_PRESS(B);
    QCOMPARE(BOX(0, 0)->getLetter(), 'b');
    KEY_PRESS(R);
    QCOMPARE(BOX(0, 1)->getLetter(), 'r');
    KEY_PRESS(A);
    QCOMPARE(BOX(0, 2)->getLetter(), 'a');
    KEY_PRESS(I);
    QCOMPARE(BOX(0, 3)->getLetter(), 'i');
    KEY_PRESS(D);
    QCOMPARE(BOX(0, 4)->getLetter(), 'd');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_B")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), YELLOW);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_I")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_D")->getColor(), GREY);
    KEY_PRESS(R);
    QCOMPARE(BOX(1, 0)->getLetter(), 'r');
    KEY_PRESS(O);
    QCOMPARE(BOX(1, 1)->getLetter(), 'o');
    KEY_PRESS(U);
    QCOMPARE(BOX(1, 2)->getLetter(), 'u');
    KEY_PRESS(N);
    QCOMPARE(BOX(1, 3)->getLetter(), 'n');
    KEY_PRESS(D);
    QCOMPARE(BOX(1, 4)->getLetter(), 'd');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_U")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_N")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_D")->getColor(), GREY);
    KEY_PRESS(M);
    QCOMPARE(BOX(2, 0)->getLetter(), 'm');
    KEY_PRESS(O);
    QCOMPARE(BOX(2, 1)->getLetter(), 'o');
    KEY_PRESS(U);
    QCOMPARE(BOX(2, 2)->getLetter(), 'u');
    KEY_PRESS(R);
    QCOMPARE(BOX(2, 3)->getLetter(), 'r');
    KEY_PRESS(N);
    QCOMPARE(BOX(2, 4)->getLetter(), 'n');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_M")->getColor(), YELLOW);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_U")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_N")->getColor(), GREY);
    KEY_PRESS(P);
    QCOMPARE(BOX(3, 0)->getLetter(), 'p');
    KEY_PRESS(L);
    QCOMPARE(BOX(3, 1)->getLetter(), 'l');
    KEY_PRESS(O);
    QCOMPARE(BOX(3, 2)->getLetter(), 'o');
    KEY_PRESS(T);
    QCOMPARE(BOX(3, 3)->getLetter(), 't');
    KEY_PRESS(S);
    QCOMPARE(BOX(3, 4)->getLetter(), 's');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_P")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_L")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_T")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_S")->getColor(), GREEN);
    KEY_PRESS(O);
    QCOMPARE(BOX(4, 0)->getLetter(), 'o');
    KEY_PRESS(D);
    QCOMPARE(BOX(4, 1)->getLetter(), 'd');
    KEY_PRESS(O);
    QCOMPARE(BOX(4, 2)->getLetter(), 'o');
    KEY_PRESS(R);
    QCOMPARE(BOX(4, 3)->getLetter(), 'r');
    KEY_PRESS(S);
    QCOMPARE(BOX(4, 4)->getLetter(), 's');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_D")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_S")->getColor(), GREEN);
    KEY_PRESS(R);
    QCOMPARE(BOX(5, 0)->getLetter(), 'r');
    KEY_PRESS(O);
    QCOMPARE(BOX(5, 1)->getLetter(), 'o');
    KEY_PRESS(O);
    QCOMPARE(BOX(5, 2)->getLetter(), 'o');
    KEY_PRESS(M);
    QCOMPARE(BOX(5, 3)->getLetter(), 'm');
    KEY_PRESS(S);
    QCOMPARE(BOX(5, 4)->getLetter(), 's');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_O")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_M")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_S")->getColor(), GREEN);

    curRound.wr->resetRound();
    curRound.wr->setAnswer("award");
    KEY_PRESS(B);
    QCOMPARE(BOX(0, 0)->getLetter(), 'b');
    KEY_PRESS(L);
    QCOMPARE(BOX(0, 1)->getLetter(), 'l');
    KEY_PRESS(E);
    QCOMPARE(BOX(0, 2)->getLetter(), 'e');
    KEY_PRESS(N);
    QCOMPARE(BOX(0, 3)->getLetter(), 'n');
    KEY_PRESS(D);
    QCOMPARE(BOX(0, 4)->getLetter(), 'd');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_B")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_L")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_E")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_N")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_D")->getColor(), GREEN);
    KEY_PRESS(P);
    QCOMPARE(BOX(1, 0)->getLetter(), 'p');
    KEY_PRESS(A);
    QCOMPARE(BOX(1, 1)->getLetter(), 'a');
    KEY_PRESS(N);
    QCOMPARE(BOX(1, 2)->getLetter(), 'n');
    KEY_PRESS(T);
    QCOMPARE(BOX(1, 3)->getLetter(), 't');
    KEY_PRESS(S);
    QCOMPARE(BOX(1, 4)->getLetter(), 's');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_P")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), YELLOW);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_N")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_T")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_S")->getColor(), GREY);
    KEY_PRESS(P);
    QCOMPARE(BOX(2, 0)->getLetter(), 'p');
    KEY_PRESS(A);
    QCOMPARE(BOX(2, 1)->getLetter(), 'a');
    KEY_PRESS(R);
    QCOMPARE(BOX(2, 2)->getLetter(), 'r');
    KEY_PRESS(A);
    QCOMPARE(BOX(2, 3)->getLetter(), 'a');
    KEY_PRESS(M);
    QCOMPARE(BOX(2, 4)->getLetter(), 'm');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_P")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), YELLOW);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), YELLOW);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), YELLOW);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_M")->getColor(), GREY);
    KEY_PRESS(A);
    QCOMPARE(BOX(3, 0)->getLetter(), 'a');
    KEY_PRESS(F);
    QCOMPARE(BOX(3, 1)->getLetter(), 'f');
    KEY_PRESS(T);
    QCOMPARE(BOX(3, 2)->getLetter(), 't');
    KEY_PRESS(E);
    QCOMPARE(BOX(3, 3)->getLetter(), 'e');
    KEY_PRESS(R);
    QCOMPARE(BOX(3, 4)->getLetter(), 'r');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_F")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_T")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_E")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), YELLOW);
    KEY_PRESS(A);
    QCOMPARE(BOX(4, 0)->getLetter(), 'a');
    KEY_PRESS(L);
    QCOMPARE(BOX(4, 1)->getLetter(), 'l');
    KEY_PRESS(A);
    QCOMPARE(BOX(4, 2)->getLetter(), 'a');
    KEY_PRESS(R);
    QCOMPARE(BOX(4, 3)->getLetter(), 'r');
    KEY_PRESS(M);
    QCOMPARE(BOX(4, 4)->getLetter(), 'm');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_L")->getColor(), GREY);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_M")->getColor(), GREY);
    KEY_PRESS(A);
    QCOMPARE(BOX(5, 0)->getLetter(), 'a');
    KEY_PRESS(W);
    QCOMPARE(BOX(5, 1)->getLetter(), 'w');
    KEY_PRESS(A);
    QCOMPARE(BOX(5, 2)->getLetter(), 'a');
    KEY_PRESS(R);
    QCOMPARE(BOX(5, 3)->getLetter(), 'r');
    KEY_PRESS(D);
    QCOMPARE(BOX(5, 4)->getLetter(), 'd');
    ENT_PRESS;
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_W")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_A")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_R")->getColor(), GREEN);
    QCOMPARE(curRound.ui->centralwidget->findChild<Key*>("toolButton_D")->getColor(), GREEN);
}

#undef BOX
#undef KEY_PRESS
#undef DEL_PRESS
#undef ENT_PRESS

QTEST_MAIN(TestTask3)
