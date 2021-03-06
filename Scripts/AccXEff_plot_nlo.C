{
//=========Macro generated from canvas: acc/acc
//=========  (Mon Jun 26 17:01:43 2017) by ROOT version5.26/00
   TCanvas *acc = new TCanvas("acc", "acc",994,47,900,867);
   gStyle->SetOptStat(0);
   acc->Range(0,0,1,1);
   acc->SetFillColor(0);
   acc->SetBorderMode(0);
   acc->SetBorderSize(2);
   acc->SetFrameFillStyle(0);
   acc->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: acc_1
   TPad *acc_1 = new TPad("acc_1", "acc_1",0.01,0.76,0.49,0.99);
   acc_1->Draw();
   acc_1->cd();
   acc_1->Range(-0.5250007,0.002753032,66.725,0.1501735);
   acc_1->SetFillColor(0);
   acc_1->SetBorderMode(0);
   acc_1->SetBorderSize(2);
   acc_1->SetFrameFillStyle(0);
   acc_1->SetFrameBorderMode(0);
   acc_1->SetFrameFillStyle(0);
   acc_1->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {6.2, 7, 9, 11, 14, 18, 25, 30, 60}; 
   
   TH1D *acc_eff_shape_dps = new TH1D("acc_eff_shape_dps","acc_eff_shape_dps",8, xAxis1);
   acc_eff_shape_dps->SetBinContent(0,0.02893851);
   acc_eff_shape_dps->SetBinContent(1,0.02483095);
   acc_eff_shape_dps->SetBinContent(2,0.0279386);
   acc_eff_shape_dps->SetBinContent(3,0.03291799);
   acc_eff_shape_dps->SetBinContent(4,0.02685266);
   acc_eff_shape_dps->SetBinContent(5,0.03207134);
   acc_eff_shape_dps->SetBinContent(6,0.0427784);
   acc_eff_shape_dps->SetBinContent(7,0.06479052);
   acc_eff_shape_dps->SetBinContent(8,0.1151735);
   acc_eff_shape_dps->SetBinError(0,0.004957516);
   acc_eff_shape_dps->SetBinError(1,0.001987281);
   acc_eff_shape_dps->SetBinError(2,0.001638146);
   acc_eff_shape_dps->SetBinError(3,0.002336627);
   acc_eff_shape_dps->SetBinError(4,0.002124807);
   acc_eff_shape_dps->SetBinError(5,0.002363715);
   acc_eff_shape_dps->SetBinError(6,0.002899397);
   acc_eff_shape_dps->SetBinError(7,0.007934405);
   acc_eff_shape_dps->SetBinError(8,0.01464195);
   acc_eff_shape_dps->SetBinError(9,nan);
   acc_eff_shape_dps->SetEntries(440.5785);
   acc_eff_shape_dps->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ff00");
   acc_eff_shape_dps->SetLineColor(ci);
   acc_eff_shape_dps->SetLineWidth(2);
   acc_eff_shape_dps->GetXaxis()->SetTitle("Four Mu Mass (GeV)");
   acc_eff_shape_dps->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_eff_shape_dps->Draw("E1");
   
   TPaveText *pt = new TPaveText(0.01,0.9411508,0.2229874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   TText *text = pt->AddText("acc_eff_shape_dps");
   pt->Draw();
   acc_1->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_2
   acc_2 = new TPad("acc_2", "acc_2",0.51,0.76,0.99,0.99);
   acc_2->Draw();
   acc_2->cd();
   acc_2->Range(-0.5250007,0.05437716,66.725,0.3471399);
   acc_2->SetFillColor(0);
   acc_2->SetBorderMode(0);
   acc_2->SetBorderSize(2);
   acc_2->SetFrameFillStyle(0);
   acc_2->SetFrameBorderMode(0);
   acc_2->SetFrameFillStyle(0);
   acc_2->SetFrameBorderMode(0);
   Double_t xAxis2[9] = {6.2, 7, 9, 11, 14, 18, 25, 30, 60}; 
   
   TH1D *acc_shape = new TH1D("acc_shape","acc_shape",8, xAxis2);
   acc_shape->SetBinContent(0,0.1079218);
   acc_shape->SetBinContent(1,0.0983701);
   acc_shape->SetBinContent(2,0.1112599);
   acc_shape->SetBinContent(3,0.1186698);
   acc_shape->SetBinContent(4,0.1113187);
   acc_shape->SetBinContent(5,0.1209411);
   acc_shape->SetBinContent(6,0.1352004);
   acc_shape->SetBinContent(7,0.167099);
   acc_shape->SetBinContent(8,0.2821382);
   acc_shape->SetBinError(0,0.009635087);
   acc_shape->SetBinError(1,0.004094893);
   acc_shape->SetBinError(2,0.003398943);
   acc_shape->SetBinError(3,0.00461701);
   acc_shape->SetBinError(4,0.004500648);
   acc_shape->SetBinError(5,0.004783659);
   acc_shape->SetBinError(6,0.005378048);
   acc_shape->SetBinError(7,0.01334035);
   acc_shape->SetBinError(8,0.02457254);
   acc_shape->SetBinError(9,nan);
   acc_shape->SetEntries(1545.285);
   acc_shape->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   acc_shape->SetLineColor(ci);
   acc_shape->SetLineWidth(2);
   acc_shape->GetXaxis()->SetTitle("Four Mu Mass (GeV)");
   acc_shape->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_shape->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.1369568,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_shape");
   pt->Draw();
   acc_2->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_3
   acc_3 = new TPad("acc_3", "acc_3",0.01,0.51,0.49,0.74);
   acc_3->Draw();
   acc_3->cd();
   acc_3->Range(-10,-0.007199712,90,0.1479781);
   acc_3->SetFillColor(0);
   acc_3->SetBorderMode(0);
   acc_3->SetBorderSize(2);
   acc_3->SetFrameFillStyle(0);
   acc_3->SetFrameBorderMode(0);
   acc_3->SetFrameFillStyle(0);
   acc_3->SetFrameBorderMode(0);
   Double_t xAxis3[8] = {0, 7, 12, 16, 20, 25, 50, 80}; 
   
   TH1D *acc_eff_shape_dps_pt = new TH1D("acc_eff_shape_dps_pt","acc_eff_shape_dps_pt",7, xAxis3);
   acc_eff_shape_dps_pt->SetBinContent(1,0.02522776);
   acc_eff_shape_dps_pt->SetBinContent(2,0.02213021);
   acc_eff_shape_dps_pt->SetBinContent(3,0.01518503);
   acc_eff_shape_dps_pt->SetBinContent(4,0.02341921);
   acc_eff_shape_dps_pt->SetBinContent(5,0.04743189);
   acc_eff_shape_dps_pt->SetBinContent(6,0.09851208);
   acc_eff_shape_dps_pt->SetBinContent(7,0.09508368);
   acc_eff_shape_dps_pt->SetBinError(1,0.002051744);
   acc_eff_shape_dps_pt->SetBinError(2,0.001890926);
   acc_eff_shape_dps_pt->SetBinError(3,0.001236923);
   acc_eff_shape_dps_pt->SetBinError(4,0.001532499);
   acc_eff_shape_dps_pt->SetBinError(5,0.002748249);
   acc_eff_shape_dps_pt->SetBinError(6,0.005092969);
   acc_eff_shape_dps_pt->SetBinError(7,0.03146514);
   acc_eff_shape_dps_pt->SetBinError(8,nan);
   acc_eff_shape_dps_pt->SetEntries(103.8293);
   acc_eff_shape_dps_pt->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   acc_eff_shape_dps_pt->SetLineColor(ci);
   acc_eff_shape_dps_pt->SetLineWidth(2);
   acc_eff_shape_dps_pt->GetXaxis()->SetTitle("Four Mu pT (GeV)");
   acc_eff_shape_dps_pt->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_eff_shape_dps_pt->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.2555394,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_eff_shape_dps_pt");
   pt->Draw();
   acc_3->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_4
   acc_4 = new TPad("acc_4", "acc_4",0.51,0.51,0.99,0.74);
   acc_4->Draw();
   acc_4->cd();
   acc_4->Range(-10,-0.009419849,90,0.5988385);
   acc_4->SetFillColor(0);
   acc_4->SetBorderMode(0);
   acc_4->SetBorderSize(2);
   acc_4->SetFrameFillStyle(0);
   acc_4->SetFrameBorderMode(0);
   acc_4->SetFrameFillStyle(0);
   acc_4->SetFrameBorderMode(0);
   Double_t xAxis4[8] = {0, 7, 12, 16, 20, 25, 50, 80}; 
   
   TH1D *acc_shape_pt = new TH1D("acc_shape_pt","acc_shape_pt",7, xAxis4);
   acc_shape_pt->SetBinContent(1,0.09674685);
   acc_shape_pt->SetBinContent(2,0.08386716);
   acc_shape_pt->SetBinContent(3,0.07632982);
   acc_shape_pt->SetBinContent(4,0.1063698);
   acc_shape_pt->SetBinContent(5,0.1584619);
   acc_shape_pt->SetBinContent(6,0.2606407);
   acc_shape_pt->SetBinContent(7,0.4375101);
   acc_shape_pt->SetBinContent(8,0.5000116);
   acc_shape_pt->SetBinError(1,0.004155709);
   acc_shape_pt->SetBinError(2,0.003790642);
   acc_shape_pt->SetBinError(3,0.002855499);
   acc_shape_pt->SetBinError(4,0.003395834);
   acc_shape_pt->SetBinError(5,0.005282765);
   acc_shape_pt->SetBinError(6,0.008874434);
   acc_shape_pt->SetBinError(7,0.0773308);
   acc_shape_pt->SetBinError(8,0.2826177);
   acc_shape_pt->SetEntries(258.199);
   acc_shape_pt->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   acc_shape_pt->SetLineColor(ci);
   acc_shape_pt->SetLineWidth(2);
   acc_shape_pt->GetXaxis()->SetTitle("Four Mu pT (GeV)");
   acc_shape_pt->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_shape_pt->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.1695089,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_shape_pt");
   pt->Draw();
   acc_4->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_5
   acc_5 = new TPad("acc_5", "acc_5",0.01,0.26,0.49,0.49);
   acc_5->Draw();
   acc_5->cd();
   acc_5->Range(-0.5625,-0.005617888,5.0625,0.1063812);
   acc_5->SetFillColor(0);
   acc_5->SetBorderMode(0);
   acc_5->SetBorderSize(2);
   acc_5->SetFrameFillStyle(0);
   acc_5->SetFrameBorderMode(0);
   acc_5->SetFrameFillStyle(0);
   acc_5->SetFrameBorderMode(0);
   Double_t xAxis5[9] = {0, 0.2, 0.4, 0.6, 0.9, 1.3, 1.8, 2.4, 4.5}; 
   
   TH1D *acc_eff_shape_dps_dy = new TH1D("acc_eff_shape_dps_dy","acc_eff_shape_dps_dy",8, xAxis5);
   acc_eff_shape_dps_dy->SetBinContent(1,0.03273912);
   acc_eff_shape_dps_dy->SetBinContent(2,0.03202487);
   acc_eff_shape_dps_dy->SetBinContent(3,0.03638981);
   acc_eff_shape_dps_dy->SetBinContent(4,0.02995349);
   acc_eff_shape_dps_dy->SetBinContent(5,0.03100966);
   acc_eff_shape_dps_dy->SetBinContent(6,0.02885756);
   acc_eff_shape_dps_dy->SetBinContent(7,0.01757322);
   acc_eff_shape_dps_dy->SetBinContent(8,0.05705021);
   acc_eff_shape_dps_dy->SetBinError(1,0.001391119);
   acc_eff_shape_dps_dy->SetBinError(2,0.001707572);
   acc_eff_shape_dps_dy->SetBinError(3,0.002401336);
   acc_eff_shape_dps_dy->SetBinError(4,0.002645874);
   acc_eff_shape_dps_dy->SetBinError(5,0.003611783);
   acc_eff_shape_dps_dy->SetBinError(6,0.005257223);
   acc_eff_shape_dps_dy->SetBinError(7,0.007927736);
   acc_eff_shape_dps_dy->SetBinError(8,0.03386448);
   acc_eff_shape_dps_dy->SetBinError(9,nan);
   acc_eff_shape_dps_dy->SetEntries(55.80841);
   acc_eff_shape_dps_dy->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   acc_eff_shape_dps_dy->SetLineColor(ci);
   acc_eff_shape_dps_dy->SetLineWidth(2);
   acc_eff_shape_dps_dy->GetXaxis()->SetTitle("Four Mu #DeltaY");
   acc_eff_shape_dps_dy->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_eff_shape_dps_dy->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.2601897,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_eff_shape_dps_dy");
   pt->Draw();
   acc_5->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_6
   acc_6 = new TPad("acc_6", "acc_6",0.51,0.26,0.99,0.49);
   acc_6->Draw();
   acc_6->cd();
   acc_6->Range(-0.5625,0.01455452,5.0625,0.1511588);
   acc_6->SetFillColor(0);
   acc_6->SetBorderMode(0);
   acc_6->SetBorderSize(2);
   acc_6->SetFrameFillStyle(0);
   acc_6->SetFrameBorderMode(0);
   acc_6->SetFrameFillStyle(0);
   acc_6->SetFrameBorderMode(0);
   Double_t xAxis6[9] = {0, 0.2, 0.4, 0.6, 0.9, 1.3, 1.8, 2.4, 4.5}; 
   
   TH1D *acc_shape_dy = new TH1D("acc_shape_dy","acc_shape_dy",8, xAxis6);
   acc_shape_dy->SetBinContent(1,0.1228127);
   acc_shape_dy->SetBinContent(2,0.1202082);
   acc_shape_dy->SetBinContent(3,0.1253439);
   acc_shape_dy->SetBinContent(4,0.1080357);
   acc_shape_dy->SetBinContent(5,0.09502136);
   acc_shape_dy->SetBinContent(6,0.09790437);
   acc_shape_dy->SetBinContent(7,0.04620569);
   acc_shape_dy->SetBinContent(8,0.08928778);
   acc_shape_dy->SetBinError(1,0.002809382);
   acc_shape_dy->SetBinError(2,0.003446727);
   acc_shape_dy->SetBinError(3,0.004644037);
   acc_shape_dy->SetBinError(4,0.005211915);
   acc_shape_dy->SetBinError(5,0.006515739);
   acc_shape_dy->SetBinError(6,0.01000305);
   acc_shape_dy->SetBinError(7,0.01303458);
   acc_shape_dy->SetBinError(8,0.04300662);
   acc_shape_dy->SetBinError(9,nan);
   acc_shape_dy->SetEntries(309.2516);
   acc_shape_dy->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   acc_shape_dy->SetLineColor(ci);
   acc_shape_dy->SetLineWidth(2);
   acc_shape_dy->GetXaxis()->SetTitle("Four Mu #DeltaY ");
   acc_shape_dy->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_shape_dy->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.1741592,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_shape_dy");
   pt->Draw();
   acc_6->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_7
   acc_7 = new TPad("acc_7", "acc_7",0.01,0.01,0.49,0.24);
   acc_7->Draw();
   acc_7->cd();
   acc_7->Range(-0.225,0.01240898,2.025,0.05593552);
   acc_7->SetFillColor(0);
   acc_7->SetBorderMode(0);
   acc_7->SetBorderSize(2);
   acc_7->SetFrameFillStyle(0);
   acc_7->SetFrameBorderMode(0);
   acc_7->SetFrameFillStyle(0);
   acc_7->SetFrameBorderMode(0);
   Double_t xAxis7[10] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8}; 
   
   TH1D *acc_eff_shape_dps_y = new TH1D("acc_eff_shape_dps_y","acc_eff_shape_dps_y",9, xAxis7);
   acc_eff_shape_dps_y->SetBinContent(1,0.0360656);
   acc_eff_shape_dps_y->SetBinContent(2,0.03628627);
   acc_eff_shape_dps_y->SetBinContent(3,0.04247071);
   acc_eff_shape_dps_y->SetBinContent(4,0.04016971);
   acc_eff_shape_dps_y->SetBinContent(5,0.04643257);
   acc_eff_shape_dps_y->SetBinContent(6,0.03353658);
   acc_eff_shape_dps_y->SetBinContent(7,0.0328369);
   acc_eff_shape_dps_y->SetBinContent(8,0.02708806);
   acc_eff_shape_dps_y->SetBinContent(9,0.02018681);
   acc_eff_shape_dps_y->SetBinContent(10,0.007981328);
   acc_eff_shape_dps_y->SetBinError(1,0.003532441);
   acc_eff_shape_dps_y->SetBinError(2,0.003490384);
   acc_eff_shape_dps_y->SetBinError(3,0.003746011);
   acc_eff_shape_dps_y->SetBinError(4,0.003500181);
   acc_eff_shape_dps_y->SetBinError(5,0.003492146);
   acc_eff_shape_dps_y->SetBinError(6,0.002638296);
   acc_eff_shape_dps_y->SetBinError(7,0.002224778);
   acc_eff_shape_dps_y->SetBinError(8,0.001838354);
   acc_eff_shape_dps_y->SetBinError(9,0.001845983);
   acc_eff_shape_dps_y->SetBinError(10,0.003028673);
   acc_eff_shape_dps_y->SetEntries(1215.736);
   acc_eff_shape_dps_y->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   acc_eff_shape_dps_y->SetLineColor(ci);
   acc_eff_shape_dps_y->SetLineWidth(2);
   acc_eff_shape_dps_y->GetXaxis()->SetTitle("Four Mu Y");
   acc_eff_shape_dps_y->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_eff_shape_dps_y->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.2462388,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_eff_shape_dps_y");
   pt->Draw();
   acc_7->Modified();
   acc->cd();
  
// ------------>Primitives in pad: acc_8
   acc_8 = new TPad("acc_8", "acc_8",0.51,0.01,0.99,0.24);
   acc_8->Draw();
   acc_8->cd();
   acc_8->Range(-0.225,0.07104088,2.025,0.1580968);
   acc_8->SetFillColor(0);
   acc_8->SetBorderMode(0);
   acc_8->SetBorderSize(2);
   acc_8->SetFrameFillStyle(0);
   acc_8->SetFrameBorderMode(0);
   acc_8->SetFrameFillStyle(0);
   acc_8->SetFrameBorderMode(0);
   Double_t xAxis8[10] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8}; 
   
   TH1D *acc_shape_y = new TH1D("acc_shape_y","acc_shape_y",9, xAxis8);
   acc_shape_y->SetBinContent(1,0.1386047);
   acc_shape_y->SetBinContent(2,0.1195647);
   acc_shape_y->SetBinContent(3,0.1389913);
   acc_shape_y->SetBinContent(4,0.1269303);
   acc_shape_y->SetBinContent(5,0.1333993);
   acc_shape_y->SetBinContent(6,0.1353982);
   acc_shape_y->SetBinContent(7,0.122793);
   acc_shape_y->SetBinContent(8,0.1081353);
   acc_shape_y->SetBinContent(9,0.0868572);
   acc_shape_y->SetBinContent(10,0.04818099);
   acc_shape_y->SetBinError(1,0.007259557);
   acc_shape_y->SetBinError(2,0.006585491);
   acc_shape_y->SetBinError(3,0.007083475);
   acc_shape_y->SetBinError(4,0.006476199);
   acc_shape_y->SetBinError(5,0.006160184);
   acc_shape_y->SetBinError(6,0.005556249);
   acc_shape_y->SetBinError(7,0.004485662);
   acc_shape_y->SetBinError(8,0.003815194);
   acc_shape_y->SetBinError(9,0.003952238);
   acc_shape_y->SetBinError(10,0.007588301);
   acc_shape_y->SetEntries(4274.849);
   acc_shape_y->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   acc_shape_y->SetLineColor(ci);
   acc_shape_y->SetLineWidth(2);
   acc_shape_y->GetXaxis()->SetTitle("Four Mu Y ");
   acc_shape_y->GetYaxis()->SetTitle("N_{Reco}/N_{Gen} (Arbitrary Units)");
   acc_shape_y->Draw("E1");
   
   pt = new TPaveText(0.01,0.9411508,0.1602083,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   text = pt->AddText("acc_shape_y");
   pt->Draw();
   acc_8->Modified();
   acc->cd();
   acc->Modified();
   acc->cd();
   acc->SetSelected(acc);
}
