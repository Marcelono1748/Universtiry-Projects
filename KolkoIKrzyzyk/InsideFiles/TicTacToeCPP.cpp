//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TicTacToeCPP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char tl,tm,tr,ml,mm,mr,bl,bm,br;
//'B' - blanc, 'X' - X, 'O' - O
char T;

void Win()
{
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);

        }
        if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);

        }
        if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);
        }
        if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);
        }
        if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);
        }
        if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);
        }
        if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)

        {
            char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);
        }
        if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)

        {
             char * condition;
             if (T=='X')
             {
             condition="Player 1 wins the match!";
             }
             else
             {
             condition="Player 2 wins the match!";
             }
             Application->MessageBox(condition, "Match is up!", MB_OK);


        }

}


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
TL->Picture->LoadFromFile("GRF/blanc.bmp");
TM->Picture->LoadFromFile("GRF/blanc.bmp");
TR->Picture->LoadFromFile("GRF/blanc.bmp");
ML->Picture->LoadFromFile("GRF/blanc.bmp");
MM->Picture->LoadFromFile("GRF/blanc.bmp");
MR->Picture->LoadFromFile("GRF/blanc.bmp");
BL->Picture->LoadFromFile("GRF/blanc.bmp");
BM->Picture->LoadFromFile("GRF/blanc.bmp");
BR->Picture->LoadFromFile("GRF/blanc.bmp");
Turn->Picture->LoadFromFile("GRF/mo.bmp");
Back->Picture->LoadFromFile("GRF/back.bmp");
Button1->Picture->LoadFromFile("GRF/RESET.bmp");
tl='B';
tm='B';
tr='B';
ml='B';
mm='B';
mr='B';
bl='B';
bm='B';
br='B';

T='O';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TLClick(TObject *Sender)
{


     if(tl=='B')
     {
        if(T=='O')
        {
          TL->Picture->LoadFromFile("GRF/O.bmp");
          tl='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          TL->Picture->LoadFromFile("GRF/X.bmp");
          tl='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        TL->Enabled=false;
//Ten IF nawet mnie przera�a ale to jedyny spos�b w jaki mi to dzia�a.
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
     Win();

        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TMClick(TObject *Sender)
{
     if(tm=='B')
     {
        if(T=='O')
        {
          TM->Picture->LoadFromFile("GRF/O.bmp");
          tm='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          TM->Picture->LoadFromFile("GRF/X.bmp");
          tm='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        TM->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TRClick(TObject *Sender)
{
     if(tr=='B')
     {
        if(T=='O')
        {
          TR->Picture->LoadFromFile("GRF/O.bmp");
          tr='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          TR->Picture->LoadFromFile("GRF/X.bmp");
          tr='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        TR->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MLClick(TObject *Sender)
{
if(ml=='B')
     {
        if(T=='O')
        {
          ML->Picture->LoadFromFile("GRF/O.bmp");
          ml='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          ML->Picture->LoadFromFile("GRF/X.bmp");
          ml='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        ML->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MMClick(TObject *Sender)
{
if(mm=='B')
     {
        if(T=='O')
        {
          MM->Picture->LoadFromFile("GRF/O.bmp");
          mm='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          MM->Picture->LoadFromFile("GRF/X.bmp");
          mm='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        MM->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MRClick(TObject *Sender)
{
if(mr=='B')
     {
        if(T=='O')
        {
          MR->Picture->LoadFromFile("GRF/O.bmp");
          mr='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          MR->Picture->LoadFromFile("GRF/X.bmp");
          mr='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        MR->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BLClick(TObject *Sender)
{
if(bl=='B')
     {
        if(T=='O')
        {
          BL->Picture->LoadFromFile("GRF/O.bmp");
          bl='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          BL->Picture->LoadFromFile("GRF/X.bmp");
          bl='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        BL->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BMClick(TObject *Sender)
{
if(bm=='B')
     {
        if(T=='O')
        {
          BM->Picture->LoadFromFile("GRF/O.bmp");
          bm='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          BM->Picture->LoadFromFile("GRF/X.bmp");
          bm='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        BM->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BRClick(TObject *Sender)
{
if(br=='B')
     {
        if(T=='O')
        {
          BR->Picture->LoadFromFile("GRF/O.bmp");
          br='O';
          T='X';
          Turn->Picture->LoadFromFile("GRF/mx.bmp");

        }
        else
        {
          BR->Picture->LoadFromFile("GRF/X.bmp");
          br='X';
          T='O';
          Turn->Picture->LoadFromFile("GRF/mo.bmp");

        }
        BR->Enabled=false;
        if(tl!='B' && tm!='B' &&  tr!='B' && tl==tm && tm==tr)
        {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(ml!='B' && mm!='B' &&  mr!='B' && ml==mm && mm==mr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && bm!='B' &&  br!='B' && bl==bm && bm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && mm!='B' &&  br!='B' && tl==mm && mm==br)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(bl!='B' && mm!='B' &&  tr!='B' && bl==mm && mm==tr)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tl!='B' && ml!='B' &&  bl!='B' && tl==ml && ml==bl)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tm!='B' && mm!='B' &&  bm!='B' && tm==mm && mm==bm)
{
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
if(tr!='B' && mr!='B' &&  br!='B' && tr==mr && mr==br)
	  {
          TL->Enabled=False;
TM->Enabled=False;
TR->Enabled=False;
ML->Enabled=False;
MM->Enabled=False;
MR->Enabled=False;
BL->Enabled=False;
BM->Enabled=False;
BR->Enabled=False;
        }
        Win();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
TL->Picture->LoadFromFile("GRF/blanc.bmp");
TM->Picture->LoadFromFile("GRF/blanc.bmp");
TR->Picture->LoadFromFile("GRF/blanc.bmp");
ML->Picture->LoadFromFile("GRF/blanc.bmp");
MM->Picture->LoadFromFile("GRF/blanc.bmp");
MR->Picture->LoadFromFile("GRF/blanc.bmp");
BL->Picture->LoadFromFile("GRF/blanc.bmp");
BM->Picture->LoadFromFile("GRF/blanc.bmp");
BR->Picture->LoadFromFile("GRF/blanc.bmp");
Turn->Picture->LoadFromFile("GRF/mo.bmp");

tl='B';
tm='B';
tr='B';
ml='B';
mm='B';
mr='B';
bl='B';
bm='B';
br='B';

T='O';

TL->Enabled=True;
TM->Enabled=True;
TR->Enabled=True;
ML->Enabled=True;
MM->Enabled=True;
MR->Enabled=True;
BL->Enabled=True;
BM->Enabled=True;
BR->Enabled=True;
}
//---------------------------------------------------------------------------

