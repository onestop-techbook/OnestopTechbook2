= 税金の話

//flushright{
親方
//}

同人活動を行うにあたって、一つ忘れてはいけないのが、税金の絡みです。確定申告が必要なラインは案外しきい値低いので、注意が必要です。

以下、あくまでケーススタディとして一般論を述べます。詳細は自分で調べるか、税理士にご相談ください。また、税制の変更により内容が変わることもあります。

== 確定申告が必要な場合

利益が20万円を超えると、確定申告の義務が生じます。

超大手サークルなどで、活動規模として「業」として認定されるような規模であれば、事業収入として計算される場合がありますが、ほとんどの規模の同人サークル、技術書を書いて夏・冬コミや技術書典で50部100部200部売る程度であれば、その所得は雑所得となります。

さらに厄介なのは、実質赤字であっても「赤字であること」が証明できるような帳簿がない場合に、税務署の指摘に反論できず、ありもしない「儲け」に、しかも期間を遡って課税されるおそれがあるということです。そこで幾つかの前提も含めて説明したいと思います。

また、同人誌の利益以外にも、ビットコインを始めとした仮想通貨のトレード、マイニング等による利益など、雑所得に区分される収入・所得が発生する可能性があるでしょう。

雑所得に関する確定申告が不要となる条件は、以下のとおりです。

「源泉徴収により税額が確定しており、かつ、雑所得が20万円以下である」

源泉徴収によって税額が確定している場合には、一般的には確定申告は不要です。@<fn>{NTA1}しかし、逆に言えば、それ以外の場合には確定申告をする必要があるということです。雑収入として20万円以上の所得があれば、確定申告により税額を確定させる必要があります。

//footnote[NTA1][No.1906 給与所得者がネットオークション等により副収入を得た場合 @<href>{https://www.nta.go.jp/taxes/shiraberu/taxanswer/shotoku/1906.htm}]

また、たとえ雑所得が20万円以下であっても、確定申告をしている場合は、雑所得についても記載する必要があります。医療費控除、ふるさと納税(ワンストップ特例利用を除く)、住宅ローン減税等がある場合、確定申告を行っているため、同人活動による雑所得を計上する必要があります。

なお、同人活動専業あるいは、業と認定される規模となっていて、事業所得として申告するような方については本書では扱いません。同人作家のための確定申告ハンドブック2018という良書があり、青色申告、保険、在庫の扱い等をカバーしつつ、豊富なケーススタディがありますので、そちらを参考にされることをオススメします。

== 税金の計算の基本

この本を読んでいる人(=技術書を書いている/書こうとしている人)は、基本的にサラリーマンが多いと思います。あるいは、フリーランスとして仕事を持っている方を想定しています。フリーランスの方は、すでに自分で確定申告をしている人も多いかもしれません。しかし、サラリーマンであれば、税金に関する計算・処理は源泉徴収および年末調整で会社が代行してやってくれていて、あまり実感を持ってやったことがないかもしれません。

非常に基本的な話ですが、本業のみの場合の税金の計算は、以下の式のような手順で行われます。

　[収入(=給与)]-[必要経費（給与所得控除）] = [所得]

　[所得]-[所得控除]=[課税所得額]

　　所得控除：社会保険料控除、生命保険料控除、寄付金控除など

　[課税所得額]×[税率]=[納税額]

給与所得だけであれば、このような手順で会社が税額を計算し、源泉所得税として代理納付してくれます。したがって、確定申告は不要となります。

ところが、同人活動で収入がある場合は、雑所得として所得が増える事になります。これは、源泉徴収が行われないため。個別に確定申告をする必要が出てくるというカラクリになります。

同人誌に関する雑収入と雑所得についても、所得とほぼ同様の式で書くこができ、その雑所得は所得額に加算、課税されます。

　[雑収入(=売上)]-[必要経費（印刷費、イベント参加費等）] = [雑所得]

　[給与所得＋雑所得]=[課税所得額]

そして、先に述べたように、雑所得が20万円を超えると、確定申告の義務が生じます。

同人活動における収入は、ほぼ単純に売上となります。この売上は、イベント売上、委託売上を含みます。また、寄稿等による原稿料がある場合は、雑収入に計上します。

必要経費は、印刷費、表紙委託等の原稿料、イベント参加費、交通費、搬入・搬出に関する費用などです、これらは必要経費として主張しやすいですね。参考図書、セミナー参加費なども、内容によっては同人活動における経費として算定できるかもしれません。ただし、あまり関係のないもの、あるいは、完全に趣味なものに対する支出は、経費として認められない可能性があります。税務調査が入って、経費が否認された場合には、修正申告、あるいは追徴課税が行われる可能性があります。

また、雑所得と本業の給与収入あるいは事業収入は損益通算できないので、同人活動で赤字計上して本業に関わる税金を減らすということはできません。

その上で、確定申告書に記載します。個別案件についての相談については、税理士法による制限がありますので、税務署または税理士にご相談ください。

== 確定申告のいろは

小規模同人サークル主に向けた確定申告の基本的な流れを説明します。前提を以下の通りとします。

　・本業：サラリーマン(源泉徴収・年末調整を受けている)

　・副業：同人サークル主(一人サークル)

　・売上規模：同人誌売上　合計50万円(委託含む)

　・必要経費：印刷費、表紙イラスト原稿料、イベント参加費　合計20万

=== 売上記録・帳簿をつける

確定申告をする前に、「確定申告に必要なデータを作る」という作業が必要になります。そのために、売上記録および帳簿をつけることが最初にやることになります。

在庫をカウントし、イベントごとの売上を集計します。

在庫数を数え、印刷数から引くことで、売上を把握することができます。厳密には、見本誌や交換した分の扱いもありますが、あまり細かくは触れません。あえて述べるなら、交換した本、献本した本は、印刷原価を「販促費」として計上できる可能性はありますが、小規模同人においては、交換分は印刷時の余部から出して、印刷発注部数分の在庫数を売上として計上するのが簡単です。

また、在庫が(大量に)ある場合、印刷費を在庫と販売済分で按分する必要があります。例えば、200冊印刷して、在庫50部、頒布済150部の場合、当年経費として計上できるのは、頒布済みの分に相当する印刷費の75％（150部／200部）です。在庫は棚卸資産として繰り延べる必要があり、経費計上はできません。ただし、今回の計算では、簡単のため、完売したということにします。

次に、必要経費をまとめます。
印刷費、イベント参加費、原稿料(表紙イラスト、寄稿等)、搬入のための宅配便費用、ポスター印刷や展示用資材の費用等の領収書を集めます。

これをお小遣い帳に記入します。

まず、収入と支出を分けて記載します。青色申告でも使える複式簿記で記帳することが望ましいのは当然ですがなかなかハードルも高く、一旦はお小遣い帳で構いません。

記入は、売上と必要経費を記入します。詳細記載した別紙を添付しても良いでしょう。確定申告書に記載する、収入と必要経費、所得の根拠資料となります。これを作った上で、利益が20万を下回っている場合は、そもそも記載(申告)する必要がなくなります。この帳簿が、税務調査等においての証拠となります。「売上はあったけれど、利益は出ていませんから、同人活動による納税義務は生じません」という主張の根拠になります。なお、税務調査の対象になる確率はおよそ1%と言われています。万一調査があった場合も、慌てることなく対応資料としても利用できます。またそもそも利益が出ているのかどうか、次の印刷部数および価格設定の参考にもなりますから、頒布実績の整理と、経費の整理はぜひやっておくべきです。

例として、以下のような項目をもって@<img>{Sheet1}のようなお小遣い帳を作ります。

収入:合計　50万円


　・イベント売上：夏コミ25万

　・イベント売上：冬コミ15万

　・委託売上：10万

費用：合計　20万円

 * 印刷費　15万
 * イラスト原稿料　3万
 * イベント参加費　夏コミ　1万
 * イベント参加費　冬コミ　1万

差し引き所得：30万

 * 50万－20万＝30万

//image[Sheet1][お小遣い帳]{
//}

確定申告において、この30万円を、雑所得として記入します。

他に、給与の源泉徴収票、医療費のまとめ、ふるさと納税の領収書等を準備してから、確定申告を始めましょう。

=== 確定申告書の実際

確定申告は、手書きでも作ることができますが、書類を貰いに行く必要があります。また、計算を自分でやらなければならないので面倒です。また、eTaxという電子申告の方法もありますが、個人認証カードの発行等少々面倒@<fn>{e-tax}です。さらに、控除ができる青色申告も可能ですが、事前の申込みが必要な上に、複式簿記により記帳する必要があります。

//footnote[e-tax][マイナンバーカードを使うとだいぶ楽になるようです]

したがって、本節では最も簡単に、かつ無料できる、国税庁の確定申告Webシステム「国税庁 確定申告書等作成コーナー」@<fn>{taxSys}を利用し、申告書を作成し、郵送により申告する方法について述べます。

無料システムの割に、必要十分な機能を備えており、説明の順に入力していき、最終的にpdfを出力してくれます。このpdfを印刷して、郵送すれば確定申告が完了します。対話形式で丁寧に説明してくれますし、確定申告の流れを追って理解する意味でも非常に便利なシステムだと考えます。

データ集計をもっと便利にするために会計ソフトを使う、あるいは税理士に依頼することも可能ですが、それぞれ費用もかかります。確定申告ギリギリラインの方は、自分でさっさとやってしまうことをおすすめします。

//footnote[taxSys][@<href>{https://www.keisan.nta.go.jp/kyoutu/ky/sm/top#bsctrl}]

国税庁のHPから、確定申告用のWebページを開きます。この中の、書面提出を選択します。一番上の所得税コーナーを選択します。真ん中の左記以外の所得のある方(すべての所得対応)を選択します。

所得入力のページに遷移しますので、@<img>{taxsys1}のように記載します。夏冬の売上が40万、印刷費他で10万、また、委託については、委託先名と住所を記入します。

//image[taxsys1][雑所得の入力]{
//}

これで、入力を終えると、@<img>{taxsys2}のように、雑所得(7)の欄に、30万円が記入されます。
なお、仮想通貨の取引、マイニング等に伴う収入、その他収入がある場合は、同時に雑所得として記入します。

また、サラリーマンであれば、会社からもらった源泉徴収票に従って、給与所得欄に記入しましょう。源泉徴収票のどこを見ればよいのか色付きで書いてありますので、それに従います。
他に事業所得や不動産所得等があれば、それも記入します。

不動産売買や株式、FX等による収入があれば、これらの下の段の「分離課税の所得」欄に記入します。

源泉徴収票の転記入力まで終えた段階での所得の欄を、@<img>{taxsys2}に示します。これで、所得の合計が(9)欄に計算されました。ここでは、416万円の所得があるという計算になりました。

//image[taxsys2][所得記入例]{
//}

次は、所得控除の計算です。様々な保険料(社会保険、生命保険、損害保険等)や、扶養の有無により、負担すべき税額が異なるという思想から、所得から差し引かれるものです。多少語弊はありますが、生きていくための必要経費分を税金から差し引くものです。先に転記した源泉徴収票の部分はすでに入力されていますし、追加があればここで記載します。可能性が高いのは、医療費控除(11)と寄附金控除(16)でしょうか。

医療費控除は、1年間にかかった医療費に応じて、所得が控除されるものです。
控除額＝医療費合計－10万円。
10万円を超える医療費がかかっている場合は、申請すると納税額が減ります。今年は体調を崩したため、25万円の医療費がかかっており、15万円の控除が適用されますという想定でいきましょう。

ふるさと納税等の寄付行為を行った場合は、寄付金控除の欄に記入します。5万円のふるさと納税を行ったと仮定して入力しました。実質2000円で地方特産品が！という触れ込みはここから来るもので、2000円を引いた48000円の控除が(16)欄に記入されています。

これで、控除額の計算が終わりました。控除欄の例を@<img>{taxsys3}に示します。所得控除額の合計は1,118,000円になります。

//image[taxsys3][所得控除欄の記入例]{
//}

ここまでくれば後はほぼ自動です。@<img>{taxTotal2}に税金の計算部分の結果を示します。

//image[taxTotal2][納税額の計算]{
//}

所得額(9)－所得控除額(25)＝課税所得(26)となり、確定申告書の右上、(26)の枠に課税される所得金額が記入されています。(27)の税額は自動計算されます。日本の現在の所得税は累進課税になっているので、課税所得額によって適用される税率は異なります。

次が、税額控除です。税額控除は、税金から直接控除されるもので、いわゆる住宅ローン減税がある方等がここに該当します。該当がなければ、次におくって構いません。

税額控除適用後の差し引き所得税額、復興特別税額等が自動で記載され、最後に、源泉徴収額と差し引きされ、税額に不足があれば追加で納付することになります。今回のモデルケースでは、11000円の追加納付が必要であることがわかります。

住所等を案内に沿って入力すると、pdfを出力可能な画面に遷移します。ここからpdfを出力するとともに、これまでに入力したデータを保存しておきましょう。なお。入力データの保存は、他のページでも可能です。

最終的に出力されたpdfを開いてみましょう。

//image[taxSheetB1][確定申告書B表1ページ:所得と税額計算]{
//}

//image[taxSheetB2][確定申告書B表2ページ:所得や雑収入、控除額の内訳]{
//}

@<img>{taxSheetB1}に示す確定申告書B表の1ページ目には、収入と所得、控除の合計と、税額の計算が記載されています。
@<img>{taxSheetB2}に示す確定申告書B表の2ページ目には、その計算の根拠として、これまでに入力した様々な事項に関する事項が記載されています。

出力したpdfは印刷して、添付書類とともに、所轄の税務署に期限内（通常3月15日まで）に提出すれば完了です。返信用封筒を入れておくと、受領印を押した控え用紙が半月から1ヶ月ほどで返送されてくるはずです。

追加納付については、金融機関での納付、クレジットカードでの納付、口座引き落としでの納付等がありますので、期限までに支払手続きを取ります。

== まとめ

以上、同人誌の収益を確定申告するにあたっての基本的な流れについて、実例を元に一通り追いました。あくまで一例であり、個別の案件については、税務署または税理士にご相談ください。

また、基本的な部分は同じではありますが、税に関する細かい運用は比較的頻繁に変わります。国税庁のシステムを利用する場合は最新運用になっているのでよいのですが、会計ソフト等を使って出力する場合は注意する必要があります。

画面および税制については、執筆時点(2018年)のものです。最新のものに適宜読みかえてください。