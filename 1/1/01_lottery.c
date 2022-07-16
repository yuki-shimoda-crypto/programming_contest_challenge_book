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
