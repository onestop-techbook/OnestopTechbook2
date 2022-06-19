= Wordによる執筆の流れ

本書では主にRe:VIEWを取り上げていますが、Wordを使うことを否定しているわけではありません。
Re:VIEWなどテキストファイルをコンパイルする方式と比べると、共同執筆や文書の分割、Gitでの履歴管理という点では及びませんが、長文の執筆という点では決して劣っていません。

ここでは、同人誌に限らず、そこそこ見栄えのよい文書を作成するために必要なWord@<fn>{WORD_VERSION}の知識を取り上げ、文書１状態から本書のスタイルを模擬して印刷できる状態にするまでの過程を簡単に説明します@<fn>{WORD_INTRO}。（Text：暗黙の型宣言）
//footnote[WORD_VERSION][Word 2010のみですが、多くの知識は他のバージョンにも応用できます。]
//footnote[WORD_INTRO][Wordを系統的に学習するにはWordの入門書などを読んでください。]

== Wordを使うときの心構え

Wordを使って文書を書くときに一番やってはいけないことは、本文をベタ書きしながら必要に応じてフォントや文字サイズを局所的に変更することです。
Wordにはスタイルと呼ばれる機能が備えられており、文書中における文章の役割とデザインを指定する機能が存在します。スタイルはHTMLにおけるタグとスタイルシートを包括したような概念です。
文あるいは単語のフォントや文字サイズを局所的に変更するのではなく、それらの役割に応じてスタイルを作り、それを適用することでデザインを変更するとともに、役割を明示します。
スタイルを軸として文書の構造を意識するだけで、Wordは格段に使いやすくなります。

== 執筆以前のWordの設定

執筆を開始する前に、Wordを使いやすくするための設定を行います。

=== 編集記号の表示

文書の体裁を整えるために、文書を制御する編集記号や特殊文字を用いることがあります。
標準ではいくつかの記号が表示されないのですが、すべて編集記号を表示することをお勧めします@<fn>{WORD_ANCHER}。
ファイルタブのオプションを開き、左メニューにある表示を選択し、画面に表示する編集記号にある編集記号を表示するオプションをチェックします（@<img>{word_intro_pref_1}）。
//image[word_intro_pref_1][編集記号の表示]{
//}

=== 禁則処理の高レベル化

次に、禁則処理のレベルを変更しましょう。Wordの禁則処理は、なぜか拗音や促音、長音などが行の最初におかれることを許可する設定になっています。
Wordのオプションダイアログの左メニューから文字体裁を選択し、禁則文字の設定を通常から高レベルに変更しましょう（@<img>{word_intro_pref_2}）。
文字体裁オプションの適用先をすべての新規文書にしておくと、文書を作成する度にこの設定を行う手間を省くことができます。
//image[word_intro_pref_2][禁則文字の設定]{
//}

=== 半角と全角の文字幅の調整

もし、ソースリストを設けるなら、半角と全角の文字幅の調整を行う設定は無効にした方がよいでしょう。
このオプションが有効になっていると、たとえ等幅フォントを使っていても、タブや全角文字を入力したときに、文字間隔が少しだけずれる場合があります。
オプションダイアログの詳細設定を選択し、一番下にあるレイアウトオプションのメニュー（@<img>{word_intro_pref_3}）を展開して、一番下までスクロールしましょう。@<img>{word_intro_pref_4}の中ほどに項目が見つかるはずです。
//image[word_intro_pref_3][レイアウトオプション]{
//}
//image[word_intro_pref_4][半角と全角文字幅の調整]{
//}
//noindent
実際にどの程度変化するか、@<img>{word_intro_pref_5}と@<img>{word_intro_pref_6}を見比べてください。
半角一文字以上ずれていることが分かります。
何らかの規則があるとは思いますが、条件は不明です。
//image[word_intro_pref_5][半角と全角文字幅の調整したときのソースリスト]{
//}
//image[word_intro_pref_6][半角と全角文字幅の調整しないときのソースリスト]{
//}

//footnote[WORD_ANCHER][図がどこかに飛んでいくというWordあるあるは、アンカーという編集記号を表示することで回避できるようになります。その他にも、文書の整形には隙間を制御するための半角/全角スペースやタブを認識することが必須です。]
//footnote[WORD_EDITMARK][よく確認に使う編集記号には、タブ、スペース、段落記号、アンカー記号、任意指定の改行があります。]

== 文書の執筆とデザイン

Wordに関する設定を行ったので、文書に関する設定を行いながら文書を作っていきましょう。
用紙の設定を行い、文書を書き進めながらその都度必要なスタイルを作っていきます。

=== 標準フォント

初めに文書のフォント（英数字用見出しおよび本文、日本語用見出しおよび本文）とそれらのサイズを設定します。
標準のフォントはページレイアウトタブから設定できます。
@<img>{word_intro_pref_7}のように、ページレイアウトタブにあるテーマのフォントをクリックすると、フォントパターンの一覧が出てきます。ここにないフォントの組合せフォントを使いたい場合は、新しいテーマのフォントパターンの作成をクリックして、新しいテーマのフォントパターンの作成ダイアログを呼び出します（@<img>{word_intro_pref_8}）。
英数字と日本語の見出しおよび本文のフォントを選択して、名前を付けて保存します。
//image[word_intro_pref_7][テーマのフォント設定]{
//}
//image[word_intro_pref_8][文書の標準フォントの指定]{
//}

=== ページサイズの設定

次に用紙に関する設定を行います。
まず用紙サイズを決定した後、余白を決め、文字数と行数を指定します。
ページレイアウトタブからページ設定ダイアログを開き（@<img>{word_intro_pref_9}）、用紙タブから文書の用紙サイズを選びます。ここではB5を選びます（@<img>{word_intro_pref_10}）。
技術系同人誌では、A5やB5が多いようです@<fn>{WORD_PAGE_SIZE}。
用紙サイズを決定したら、余白タブで上下左右の余白を決定します@<fn>{WORD_PAGE_MARGIN}（@<img>{word_intro_pref_11}）。
文字数と行数タブでは、1ページあたりの行数と1行あたりの文字数を設定します@<fn>{WORD_PAGE_LINES}（@<img>{word_intro_pref_12}）。
通常は行数だけを指定すれば十分です。
//image[word_intro_pref_9][ページ設定の呼びだし][scale=1.2]{
//}
//image[word_intro_pref_10][用紙設定][scale=0.4]{
//}
//image[word_intro_pref_11][余白設定][scale=0.4]{
//}
//image[word_intro_pref_12][文字数と行数の設定][scale=0.4]{
//}

=== 文書テンプレートの保存

ここまで設定したら、この文書をテンプレートとして保存しましょう。
一度同人誌を作成してイベントに参加すると、必ず次も参加したくなります。
そのときに備えて、文書のひな形を保存しておくのです。
文書テンプレートとして保存するには、名前を付けて保存ダイアログにおいてファイルをWordテンプレート（*.dotx）とします。
@<img>{word_intro_pref_13}を参考に左のツリーを上までスクロールするとMicrosoft Wordというフォルダがみつかるので、そのフォルダに含まれているTemplatesフォルダに保存しましょう。
//image[word_intro_pref_13][-][scale=0.5]{
//}

次回以降、そのテンプレートに基づいた新規文書を作成するには、ファイルタブの新規作成からマイテンプレートを選び、新規ダイアログボックスの中にある当該テンプレートを選択します。
必ずテンプレートを使うときがくるでしょう。
//image[word_intro_pref_14][マイテンプレートによる文書の新規作成][scale=0.5]{
//}

=== スタイルによる文書デザインと構造化

用紙の設定ができたら、いよいよ執筆を開始します。
ここで必要なスタイルを全て洗い出して…とすると勢いが削がれるので、執筆しながらスタイルを作成・適用していきましょう@<fn>{WORD_STYLE}。

「はじめに」などの章のタイトルを書いたら、章のタイトルを意味するスタイルを適用します。
Wordでは章のタイトル用に見出し１スタイルがすでに作られているので、ホームタブのスタイルから適用しましょう。
//image[word_intro_style_1][章題目の入力][scale=0.5]{
//}
//image[word_intro_style_2][章題目への見出し１スタイルの適用][scale=0.5]{
//}
//noindent
見出し１のデザインや上下の行間を変更するには、スタイルを右クリックして変更を選択します。
スタイルの変更ダイアログでフォントサイズを変更します。
次に書式メニューから段落を選択し、段落前後の余白を決め、OKボタンを押してスタイルの変更を反映すると、見出しのデザインが変わります。
//image[word_intro_style_3][スタイルの変更][scale=0.5]{
//}
//image[word_intro_style_4][フォントサイズと書体の変更][scale=0.4]{
//}
//image[word_intro_style_5][書式メニュー][scale=0.4]{
//}
//image[word_intro_style_6][段落前後の空白の設定][scale=0.4]{
//}
//image[word_intro_style_7][変更されたスタイルの適用][scale=0.5]{
//}

章題目の次は節題目を書き、見出し２スタイルを適用し、変更します。
//image[word_intro_style_8][節題目への変更された見出し２スタイルの適用][scale=0.5]{
//}
//noindent
章や節の番号は、スタイルでは対応できません。
章や節に連番をふる方法は後ほど説明します。

本文には標準スタイルが割り当てられていますが、これを変更すると、このスタイルを基準にしたスタイル全てに影響が及びます@<fn>{STD_STYLE}。
そのため、本文用に新しくスタイルを作ります。
スタイルウィンドウを呼び出し、スタイルの管理を選択します。
新しいスタイルボタンをクリックして、スタイルを新しく作っていきます。
本文（インデントあり）スタイルと、それを基準にした本文（インデントなし）スタイルをつくりました。
クイックスタイルに登録するにチェックを入れておくと、ホームタブのスタイルの一覧に表示されます。
//image[word_intro_style_9][スタイルの管理ボタン（スタイルウィンドウ下部）][scale=0.5]{
//}
//image[word_intro_style_10][新しいスタイルの作成][scale=0.4]{
//}
//image[word_intro_style_11][新規に作成された本文（インデントあり）スタイル][scale=0.4]{
//}
//image[word_intro_style_12][本文（インデントあり）スタイルを基準にした本文（インデントなし）スタイル][scale=0.4]{
//}
//image[word_intro_style_13][クイックスタイル一覧への追加][scale=0.7]{
//}

これ以降も、図表題目を入力したら図表題目のスタイルを変更する、というように書きながらスタイルを作っていくと、次に同じ構造（章や節の題目、図表番号など）が現れた時にはスタイルを適用するだけですみます。
文章を書けば書くほど、デザインにかける労力が減っていくのがWordの特徴です。

本書は、章が変わると新たなページから次の章が始まります。
一通り章の内容が書き終わったら、章の終わりにセクション区切りを挿入しておきましょう@<fn>{WORD_SECTION}。
改行を連打してページを切り替えてはいけません。
セクション区切りは、ページレイアウトタブの区切りをクリックしてメニューを展開し、セクション区切りの次のページから開始をクリックすることで挿入できます。
後ほど説明しますが、セクション区切りを上手につかうと、ヘッダーやフッターのデザインを柔軟に決められるようになります。

=== 執筆に集中したいときのアウトラインモード

Wordでは通常、印刷レイアウトモードと呼ばれる、あたかも紙に文字を書いていくかのような画面で作業をします。
//image[word_intro_mode_1][印刷レイアウトモード]{
//}
//noindent
ですが、長い文書を作成するときは、書きたい項目を考えて見出しとして書き出し、各見出しに本文を肉付けしていく人が多いと思います。
その場合、印刷レイアウトモードだと余白などで1ページに収まる文章の量が制限され、一覧性が損なわれます。
章立てを考えたり本文を入力するだけの場合には、アウトラインモードで作業するのが効率的です。

アウトラインモードに切り替えるには、表示タブからアウトラインを選択します@<fn>{WORD_OUTLINE_MODE}。
アウトラインモードに切り替えると、表示されるスタイルが大幅に制限されます。
画像も表示されません。
//image[word_intro_mode_2][アウトラインモード]{
//}
//noindent
この状態で見出しや本文を書いていくと、文書の構造やレイアウトを崩さずに多くの文章を一つの画面に収めることができます。
アウトラインモードではアウトラインタブのレベルを変更することで見出しレベルの変更ができます。章・節の位置を前後に移動させることも簡単です。

//footnote[WORD_PAGE_SIZE][用紙サイズは、配付資料のような比較的薄い文書はA4、書籍などではB5が多いような印象があります。技術系に限らない同人誌はB5が多く、用紙サイズによっては購入を躊躇するという話も聞きます。]
//footnote[WORD_PAGE_MARGIN][この設定のままA4用紙に印刷しても違和感がないので、余白はかなり狭い気がします。]
//footnote[WORD_PAGE_LINES][行数は標準から若干少なくして行間を大きくした方が読みやすいように思います。本書はページあたりの行数が多いのですが、フォントが小さい分、行間が相対的にひろくなっているようです。]
//footnote[WORD_STYLE][局所的・場当たり的にフォントや文字サイズを変更するのは問題ですが、スタイルを作成・適用すると、その文の構造を明らかにしてくれます。今後、同じ役割の文にスタイルを適用していけば、一括してデザインを変更できるようになります。]
//footnote[STD_STYLE][たとえば、標準スタイルに字下げを設定すると、標準スタイルを基準にしている見出し１や見出し２も字下げされます。]
//footnote[WORD_SECTION][スタイルの設定で、見出し１が必ず新しいページから始まるように設定できますが、その場合は各章が異なるセクションとして認識されないので、後述するヘッダーやフッターの設定ができなくなります。]
//footnote[WORD_OUTLINE_MODE][ショートカットキーAlt+Ctrl+Oでもアウトラインモードに切り替えることができます。印刷レイアウトモードに切り替えるショートカットキーはAlt+Ctrl+Pです。]

== 図表の挿入と相互参照

=== 図の挿入

本文中に図を挿入するには、挿入タブの図から挿入したい画像ファイルを選択するか、本文中に画像ファイルをドラッグ＆ドロップします。
標準では、挿入した画像は行内に配置されます。
ざっくりというと、画像も文字のような扱いとなり、図形の高さによって行の高さが変わったり、前の文字と共に場所が移動していきます。
//image[word_intro_fig_1][図の配置と周囲の文字列の折り返し]{
//}
//noindent
文字の回り込みはされないので、図の位置は段落と段落の間に制限されるでしょう。
図の配置に自由度がなく不便なように感じますが、これが一番楽です@<fn>{WORD_FIG_POSITION}。
Wordにおける図表の配置は評判が悪く、図がどこかに消えたという話をよく耳にします。
配置を行内にしていれば、余白の関係で図が前ページや次ページに送られることはありますが、
どこかに飛んでいくことは絶対にありません。

=== 表の挿入

本文中に表を挿入するには、挿入タブの表をクリックして、展開されたメニューのマス目を使って表の行数と列数を指定するか、表の挿入から列数と行数を指定して挿入します。
配置はやはり行内になっているので、これもむやみやたらに移動させない方がよいでしょう。
表内にマウスカーソルがあると、リボンに表ツールが現れます。ここで表のデザインを変更できます。ただし、表中の文字のデザインについてはスタイルを利用しましょう。

=== 図表番号の挿入と参照

図表番号を挿入するには、図あるいは図にカーソルを移動し、参考資料タブの図表番号の挿入を利用します。
図表のラベルは図表番号ダイアログのプルダウンメニューから選択します。
もし目当てのラベルがない場合は、ラベル名ボタンを押して新しいラベル名を作成できます。
//image[word_intro_fig_2][図表番号の番号付け設定]{
//}
//image[word_intro_fig_3][図表ラベルと位置の設定]{
//}
//noindent
ラベルの位置は、項目の上か下かを選ぶことができるので、図の場合は選択した項目の下、表の場合は選択した項目の上を選びます。
図表番号とラベルが挿入されたら、キャプションをつけます。
//image[word_intro_fig_4][挿入されたラベルと番号][scale=1.2]{
//}
//noindent
図表番号を挿入すると、クイックスタイルに図表番号スタイルが表示されるようになるので、デザインを変更する場合はこのスタイルを変更しましょう。
ラベル、番号、キャプションに反映されます。

挿入した図表番号を本文中で参照するには、参考資料タブの相互参照を利用します。
参照する項目のプルダウンメニューから図や表に設定したラベルを探して、該当する番号を選択し、挿入ボタンをクリックします。
このとき、相互参照の文字列が図表番号全体になっているとラベル、番号、キャプションの全てが本文中に挿入されます。
番号とラベルのみにしておくと、ラベルと番号が挿入されます。
//image[word_intro_fig_5][図表番号の参照]{
//}
//image[word_intro_fig_6][挿入されたラベルと番号]{
//}

このような手間のかかる方法ではなく、図表番号の挿入を利用して付けた番号をコピー＆ペーストすれば簡単なように感じますが、図表番号の挿入を利用して挿入した番号は、コピー＆ペーストすると番号が増えていきます。
相互参照で参照した図表番号は、コピー＆ペースとしても値は変化しません。

//footnote[WORD_FIG_POSITION][Re:VIEWでも一つの画像しか置けないようになっているようですね。]
//footnote[WORD_CAPTION][図題目とも呼ばれます。Wordでは説明文と呼ばれています。]

== 章番号を付ける

デザインに関することはスタイルを使いましょうと書いてきましたが、章や節に番号を付けるのはスタイルからはできません。
ホームタブのアウトラインから設定します@<fn>{CHAPTER_NUMBER_OUTLINE}。
見出し全て（レベル１から９）に関係しますが、見出しとなるスタイルにしか関係しないためだと思われます。

ホームタブのアウトラインをクリックするとメニューが展開されます。
リストライブラリに使いたいデザインがあればそれをクリックするだけで、章番号、節番号などがつきます。
もっとデザインに凝りたいという場合には、新しいアウトラインの定義をクリックし、新しいアウトライン定義ダイアログを開いて設定していきます。
//image[word_intro_chapter_1][新しいアウトラインの定義]{
//}
//noindent
見出しのレベルは１から９まで存在していますが、設定は使うレベルだけでかまいません。
見出しレベル２以降の番号書式を編集する際、 「章番号.節番号」のように、上位レベルの番号も含めたい場合には、次のレベルの番号を含めるの項目を設定します。
次のレベルの番号を含めるに何も表示されていなければ、全ての番号が番号書式に含まれます。
もし、ある特定のレベルだけ番号がうまくつかない場合、新しいアウトライン定義ダイアログのオプションボタンを押すと展開される項目にある「レベルと対応付ける見出しスタイル」で、レベル１と見出し１、レベル２と見出し２…など、見出しレベルと見出しスタイルが対応していることを確認してください。
//image[word_intro_chapter_2][アウトラインの設定]{
//}

本書では、章番号が1行目、章題目が2行目以降にくるように設定されています。
これをWordで正しく設定する方法が分からなかったので、かなり苦し紛れの方法で再現しています。
新しいアウトラインの定義ダイアログを開き、配置のインデント位置を0 mmにします。
オプションにある番号に続く空白の扱いをタブにし、タブ位置の追加をチェックし、タブがページ右端にくるように設定します。
数値はページサイズと余白から計算します。
ここで作っているWord文書は、用紙の横サイズが182 mm、左右の余白が10 mmですので、タブ位置は162 mmとなります。
//image[word_intro_chapter_3][本書の章題目を再現するアウトライン設定]{
//}
//noindent
このように設定すると、章番号がページ左端に置かれ、章題目はページの右端にはみ出して表示されます。
題目の前に半角スペースを入力すると、章題目が2行目の左端に揃えられます。
半角スペースの代わりにShift+Enterで段落内改行を挿入する方法もありますが、その場合はヘッダーに章題目を設定するのが難しくなります。
本書では、ヘッダーに章題目を入れないので、半角スペースでも段落内改行でも問題ありません。
//image[word_intro_chapter_4][アウトライン設定された章題目（1行目末に半角スペースが確認できる）]{
//}

「この本について」や「目次」に章番号を付けなくない場合には、第1章となる見出しがあるページまで移動し、同じように新しいアウトラインを定義します。
このとき、アウトラインの定義ダイアログのオプションを展開したところにある「変更の対象」をこれ以降とします。

//footnote[CHAPTER_NUMBER_OUTLINE][ここでいうアウトラインは、アウトラインモードとは関係ありません。]

== 目次の挿入

=== 目次の作成

スタイルを正しく適用できていれば、目次の作成はとても簡単です。
目次を挿入したいページに移動して、参考資料タブの目次をクリックし、組み込みの一覧に表示されている目次を選ぶだけです。
表示する項目を章に限定する、あるいはもっと下位の項目（項や段）まで表示したい、目次の各項目の書式を変更したい場合には、目次をクリックすると展開されるメニューから目次の挿入をクリックし、目次ダイアログの目次タブから設定します。
//image[word_intro_toc_1][挿入する目次の設定]{
//}

目次に掲載する項目の書式（フォントサイズやインデント幅など）は、目次を挿入するときに設定します。
目次をクリックすると展開されるメニューから目次の挿入をクリックし、目次ダイアログの目次タブから掲載するレベルなどの設定をしたら、変更ボタンをクリックして、文字/段落スタイルの設定を呼び出します。
スタイルの目次1, 2, 3がそれぞれアウトラインレベルの1, 2, 3（章、節、項）に対応しているので、変更ボタンをクリックしてスタイルを設定します。
//image[word_intro_toc_2][目次に掲載される各項目のスタイル]{
//}
//image[word_intro_toc_3][目次に掲載される見出し１レベルのスタイル]{
//}
//image[word_intro_toc_4][目次に掲載される見出し２レベルのスタイル]{
//}
//image[word_intro_toc_5][目次に掲載される見出し３レベルのスタイル]{
//}
//noindent
この設定で挿入される目次は@<img>{word_intro_toc_6}のようになります。
それなりにRe:VIEWの目次の書式を再現できていると思います。どうでしょうか？
//image[word_intro_toc_6][実際に挿入された目次の一部]{
//}

目次を作成した後に本文を修正してページ番号がずれたとしても、目次そのものを編集する必要はありません。
参考資料タブの目次の更新から更新作業を行うだけです。
目次の更新をクリックして目次の更新ダイアログを開くと、ページ番号だけを更新するか、目次全てを更新するかを選ぶことができます。
ページ番号だけを更新すると、目次に記載された項目のページ番号だけが更新されます。
目次全てを更新すると、実質的な目次の作り直しとなって、目次に記載される項目も含めて全ての項目が更新されます。

=== 目次に掲載する項目の選択

本書では、目次に目次が掲載されていません@<fn>{TOC_IN_TOC}。
Wordの目次では、掲載される項目は見出しレベルによって決まります。
そして、特定の項目だけを目次に掲載しないようにする設定は見当たりません。

特定の章を目次に掲載しないようにするには、一度目次を作り、そこから特定の章を削除するのが簡単です。
不要な項目までカーソルを移動させ、DELキーやBSキーで削除するだけです。
ページ番号だけを更新するようにすれば、消した行は現れません。
目次全てを更新すると削除した章が再び掲載されるので、もう一度削除します。

スタイルを使う事もできます。見出し１スタイルを複製して見出し１（目次非掲載）スタイルを作り、アウトラインレベルを本文にすることで目次に掲載されない見出し@<fn>{TOC_TITLE}を作ることができます。

//footnote[TOC_IN_TOC][正確に表現すると、本書の目次には、目次という章題目とそれの掲載されているページ数がない、ということです。]
//footnote[TOC_TITLE][正しくは、見出し１と同じデザイン（フォントの種類、大きさ、位置）の本文です。]

== ページ番号、ヘッダー・フッターの設定

本書では、ページ番号はページ下部中央に付けられています。これは全ページで共通です。
ヘッダーは、章の最初のページだけ異なっており、それ以降のページでは節のタイトルが右揃えで書かれています。
「はじめに」の章では、章の2ページ目のヘッダーには章題目だけが表示されています。
目次では、章の2ページ目のヘッダーに罫線が引かれているだけです。
これらを再現します。

ヘッダーとフッターを編集する前に、必要な設定を行いましょう。
ページ設定ダイアログを表示し、その他タブでヘッダーとフッターの設定をします。
本書の余白はかなり狭いので、ヘッダーとフッターの余白を適切に設定しないと、本文に食い込んでしまいます。

次に、用紙端からの距離のすぐ上に、先頭ページのみ別指定という項目があるので、チェックを入れます。
これで各章の先頭ページだけ別のヘッダー・フッターを使えるようになります。
//image[word_intro_header_1][ヘッダーとフッターの余白設定]{
//}

=== フッター（ページ番号）の設定

ヘッダーはややこしそうですが、フッターは簡単に設定できます。
まずは文書の先頭ページへ行き、フッター領域をダブルクリックします。
編集モードに入るので、デザインタブのページ番号からページ下部→番号のみ ２を選びます。
//image[word_intro_header_2][ページ番号の挿入]{
//}
//noindent
そうすると先頭ページと各章の先頭ページにページ番号が入ります。
次に2ページ目@<fn>{WORD_PAGE_NUMBER}へ移動し、フッターをクリックして、同じようにページ番号を付けます。
これでページ番号の設定は完了です。

=== ヘッダーの設定

ヘッダーの設定はフッターに比べてすこし面倒です。
理由の一つは、本書の場合、はじめに、目次、本文各章でヘッダーの設定が異なるからです。
他にも、罫線が引かれていることや、章・節の題目を載せることも設定が複雑になる理由です。

「はじめに」のヘッダーを設定します。
先頭ページのヘッダーには何もないので、2ページ目に移動します。
ヘッダーをダブルクリックして編集モードに入ったあと、改行記号を選択状態にして右揃えにします。
//image[word_intro_header_3][ヘッダーの設定（右揃え）]{
//}
//noindent
次に、ページレイアウトタブのページ罫線をクリックし、表示された線種とページ罫線と網掛けの設定ダイアログの罫線タブを選び、
線が引かれる位置や線の種類および色を設定します。設定対象を段落とし、罫線の引く位置をボタンから選びます。
ここでは段落の下に線を引いています。
//image[word_intro_header_4][ヘッダーの設定（下線）]{
//}
//noindent
最後に、章の題目を挿入します。デザインタブのクイックパーツからフィールを選び、フィールドの名前からStyleRefを探します。
StyleRefをクリックするとフィールドプロパティにスタイル名が表示されるので、見出し１を選択し、OKを押します。
章題目が挿入されました。
ヘッダーの文字の書式は、ヘッダースタイルから変更しましょう。書式はゴシック体のBoldです。
//image[word_intro_header_5][フィールドを利用した章題目の挿入]{
//}
//image[word_intro_header_6][完成した「はじめに」のヘッダー]{
//}

「目次」のヘッダーを設定します。
ページをスクロールして、目次の2ページ目に移動すると、既にヘッダーに罫線が引かれ、章題目（目次）が挿入されています。
//image[word_intro_header_7][目次のヘッダー]{
//}
//noindent
Wordは基本的に前ページで設定されたヘッダーの設定を引き継ぐので、これを無効にします。
デザインタブの前と同じヘッダー/フッターがアクティブになっているので、クリックして無効にします。
その後、挿入されている章題目を削除します。
//image[word_intro_header_8][前と同じヘッダー/フッターの利用設定]{
//}

同じように、本文の2ページ目もヘッダーの設定が引き継がれているので、前と同じヘッダー/フッターを無効にしましょう。
本文ではヘッダーに節の番号と題目を掲載するので、「はじめに」の時と同じように、クイックパーツのフィールドからStyleRefを選択します。
ここでは見出し２を選択し、フィールドオプションの段落番号の挿入にチェックを入れます。
同じ手順で、見出し２を選択し、今度は段落番号の挿入にチェックを入れないようにすると、節の題目が挿入されます。
//image[word_intro_header_9][フィールドを利用した節番号の挿入]{
//}
//image[word_intro_header_10][完成した本文各章のヘッダー]{
//}

これでヘッダー・フッターの設定が完了し、無事に本の体裁が整いました。

//footnote[WORD_PAGE_NUMBER][各章の先頭ページとそれ以降のページで同じ設定にすることが目的です。2ページ目が章の1ページ目になっている場合には、さらに次のページ（文書の中で一番前にある、章の先頭ページではないページ）へ移動してページ番号を付けます。]

== この章のまとめ

簡単に、といいつつかなり長々と説明をしましたが、多くの項目（特にスタイル）は一度設定すると文書テンプレートに保存しておけるので、次からは設定を簡略化することができます。
Wordを使い慣れている方、Re:VIEWはハードルが高そうだと感じる方は、Re:VIEWにこだわらなくてもWordで十分クオリティの高い同人誌を作る事ができます。
ここで紹介した内容は、Wordの入門書や解説書@<fn>{WORD_REFERENCE}を読むと系統立てて説明されているので、Wordが苦手な方も一度読んでみることをお勧めします。

あなたが書く技術系同人誌は、何のソフトで書かれたかではなく、そこに込められたあなたの情熱によって人を惹きつけるのです。

//footnote[WORD_REFERENCE][たとえば西上原裕明、Wordで作る長文ドキュメント ～論文・仕様書・マニュアル作成をもっと効率的に、技術評論社、2011]

====[column] WordドキュメントからEPUBを作る

EPUBとは電子書籍のファイルフォーマットの一つです。
Wordでは、Wordで作成したドキュメントをPDFファイルとして保存できるようになりましたが、EPUBファイルとして保存することはできません。
WordドキュメントをEPUBに変換するにはいくつかの方法があります。
その中でも、お手軽で忠実に変換してくれるソフトウェアにLeME@<fn>{WORD_LEME}があります。
LeMEでWordドキュメントを変換する処理は、WordファイルをLeMEにドラッグ＆ドロップで読み込ませ、タイトルや綴じの方向など本の情報を入力し、変換ボタンを押すという3ステップだけです。
現行のバージョンでも図形や数式を完璧に変換してくれるわけではありませんが、精力的にアップデートされているので、今後に期待しています@<fn>{WORD_Liselotte}。

//footnote[WORD_LEME][@<href>{https://leme.style}]
//footnote[WORD_Liselotte][LeMEのイメージキャラクターも結構力が入っています@<href>{https://lieselotte.moe}]
====[/column]