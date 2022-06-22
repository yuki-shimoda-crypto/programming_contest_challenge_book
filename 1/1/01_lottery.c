#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, m;
	int *k;
	bool flag;
	
	scanf("%d%d", &n, &m);
	k = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}
	flag = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < n; l++)
			{
				for (int o = 0; o < n; o++)
				{
					if (m == k[i] + k[j] + k[l] + k[o])
					{
						flag = true;
						break;
					}
				}
				if (flag)
					break;
			}
			if (flag)
				break;
		}
		if (flag)
			break;
	}
	if (flag)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}



目次
ッ
目 次
しいさ チャ レン ジ ! でもその 前 に一 準代 編 = 。。 。1-1 プロ グラ ミン グコ ン テ ス ト っ て 何 ? ーー ドー ドー ドー ドー ドー ドー ドーーーーーーーー8
1-2 PRIS AYTARDB SO? «ces ost enine + wise ws cise s sie yee seamen s somnsjeistes st] |
世界 規模 のコン テス トー- Google Code Jam (GCJ) ーー11
上 位ラン ク を 目指 せ ! 一 TopCoder -... バ ーーーーーーーーーーーー11
最も 歴史 のある コン テス トー ACM/ICPC ... バ トトトー ドー トード ーー 11
Ch - BRI OWS U YE y 7 —SOVIOL eee eee]
Web 上 で 自動 採点 一オンラインジャ ッ ジ ーーーーーーーーーーーーーー18
DESI NACo EN の の の oe ーー ーー ツー... 1S
沈 書 で 折 内皿に つじ U で ドジ oe ドー ......13
使用する 言語 につい て 一 ドド ーーー ドードー トー ドー ドーーーーーーーー 13
問題の 扱いについて ... ド ドド ドド ドド ーーーーーーーーーーーーーーーーーーーーー13
PAN UNE «22+ oerencenvinonncie ceo e 22 tasineeteseres s222- oes
PRIME SUN 20522 zsvccsmmammnnn ses: 02 scniwaamqemasaacs:bescamenmae yd)
本 書 を 読 古 した ら ー-さ ら な る 練習 方 法・... fee e eee eee teen eeee eee TAL
1-4 ESP THB ENS SO? cece eee eee eter TB
PO0J へ の 提出の 仕方 ーーーー...ー... ーー neces]
GCJ へ の 提出の仕方 ...... バ ーーーーーーーーーーーーーーーーーーーー1 ブ
1-5 効率 的 な アルゴリ ズム を 目指 す に は ーーーーーーーーーーーーーーー80
計算量って 何だろう ーーーーーーーーー mimet20
実行時 間に つ いて ......... ss 語ら
1-6 気楽 にウォ ー ミング ァ ッ プー ドー ドド ーー ドー ドー トー トト ーー トー どら1
まず は 簡単な 問題 から ............ oi
POON PANES, «<2 rent seninre cea: Bs: oraaseetindaeysoss: 2s vonounae OS)
TN RID RED oe [< WOE eceewees soc see sccemmwmndens r552 0s seecnsmemmnnne5
2BMpS29—hi—wm 。 。 。 。2-] すべ て の 基本" 全 探索 " ーー ドーーーーーーーーーーーーーーーー80
特殊な 状態 の列 ドー バド ドー ドーーーーーーーーーーーーーーーーーーーーーー39
枝 天 り ーー ドー ドー ドー ドー ドド ドー トド ーー ドー ニーーーーーーーーー40
硬貨の 問題 ...... バ ドド ドー ドー ドー ドド ーー ドー ドー トーーーーーーーー ーー4 ら
SEMIAMNO PSM 622-2. concssemanns oe¢22 <onamamememes s+: 124 ononioeeers
ZOWMOME see 22 2s onasismsininesabes ss sc adamaemecmwsss:as 2s cnccameamnns AT
2-3 値 を 覚え て 再 利用 ' 動 的計画 法 " ・... バ ーーーーーーーーーーーーーー5ら
PERRO1C MIRO RTRs scitrrise.stesav ee ccicemmruimeeeones ss 1 deena 5 ら
ERC PeSe Re 2222 vunsaccwmmeeds+ 242125 accrtsancepens ss21¥22e sasemtiecenes1S
計算 問題 に 対するDP ーーーーーーーーーーーーーーーーーーーーーーーーB6
ら -4 デー タ を 工夫 し て 記憶 する "デー タ 構 造 " ...... ド ーー ドド ーー ドー ドーーーーーーー69
easses G9)
プライオ リティキュー と ヒープ ーー ドー ドーーーーーーーーーーーーーーーーーーB9
Union-Find木 ドドドドドド ーー ドー ドーーーーーーーーーーーーーーーーーーーーーB1
OS SNETMERIE "GSD? assess sie ss siete ss sues vw +s seins soo votes ooiew 83268 BZ
グラ フ の 表現 ... バ バー ドーーーーーーーーーーーーーーーーーーーーーー80
グラ フ の 探索 ・............ 8
4



目次
ッ
目次
しいさチャレンジ!でもその前に一準代編=。。。1-1プログラミングコンテストって何?ーードードードードードードードーーーーーーーー8
1-2PRISAYTARDBSO?«cesostenine+wisewscisessieyeeseamenssomnsjeistesst]|
世界規模のコンテストー-GoogleCodeJam(GCJ)ーー11
上位ランクを目指せ!一TopCoder-...バーーーーーーーーーーーー11
最も歴史のあるコンテストーACM/ICPC...バトトトードートードーー11
Ch-BRIOWSUYEy7—SOVIOLeeeeee]
Web上で自動採点一オンラインジャッジーーーーーーーーーーーーーー18
DESINACoENのののoeーーーーツー...1S
沈書で折内皿につじUでドジoeドー......13
使用する言語について一ドドーーードードートードードーーーーーーーー13
問題の扱いについて...ドドドドドドドーーーーーーーーーーーーーーーーーーーーー13
PANUNE«22+oerencenvinonncieceoe22tasineeteseress222-oes
PRIMESUN20522zsvccsmmammnnnses:02scniwaamqemasaacs:bescamenmaeyd)
本書を読古したらー-さらなる練習方法・...feeeeeeeeeteeneeeeeeeTAL
1-4ESPTHBENSSO?ceceeeeeeeeterTB
PO0Jへの提出の仕方ーーーー...ー...ーーneces]
GCJへの提出の仕方......バーーーーーーーーーーーーーーーーーーーー1ブ
1-5効率的なアルゴリズムを目指すにはーーーーーーーーーーーーーーー80
計算量って何だろうーーーーーーーーーmimet20
実行時間について.........ss語ら
1-6気楽にウォーミングァップードードドーードードートートトーートーどら1
まずは簡単な問題から............oi
POONPANES,«<2rentseninrecea:Bs:oraaseetindaeysoss:2svonounaeOS)
TNRIDREDoe[<WOEeceeweessocseesccemmwmndensr5520sseecnsmemmnnne5
2BMpS29—hi—wm。。。。2-]すべての基本"全探索"ーードーーーーーーーーーーーーーーーー80
特殊な状態の列ドーバドドードーーーーーーーーーーーーーーーーーーーーーー39
枝天りーードードードードードドドートドーードーニーーーーーーーーー40
硬貨の問題......バドドドードードードドーードードートーーーーーーーーーー4ら
SEMIAMNOPSM622-2.concssemannsoe¢22<onamamememess+:124ononioeeers
ZOWMOMEsee222sonasismsininesabesssscadamaemecmwsss:as2scnccameamnnsAT
2-3値を覚えて再利用'動的計画法"・...バーーーーーーーーーーーーーー5ら
PERRO1CMIRORTRsscitrrise.stesaveeccicemmruimeeeonesss1deena5ら
ERCPeSeRe2222vunsaccwmmeeds+242125accrtsancepensss21¥22esasemtiecenes1S
計算問題に対するDPーーーーーーーーーーーーーーーーーーーーーーーーB6
ら-4データを工夫して記憶する"データ構造"......ドーードドーードードーーーーーーー69
eassesG9)
プライオリティキューとヒープーードードーーーーーーーーーーーーーーーーーーB9
Union-Find木ドドドドドドーードードーーーーーーーーーーーーーーーーーーーーーB1
OSSNETMERIE"GSD?assesssiesssietesssuesvw+sseinssoovotesooiew83268BZ
グラフの表現...ババードーーーーーーーーーーーーーーーーーーーーーー80
グラフの探索・............8
4
