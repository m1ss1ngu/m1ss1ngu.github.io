<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <!-- 适应移动端设备的网页浏览 -->
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <!-- 合理设置引入js/css文件的代码位置，防止样式覆盖 -->
    <!-- 这里用静态方式给出页面的css样式，也可以用link链接.css文件 -->
    <!-- 引入看板娘css文件 -->
    <script src="https://cdn.jsdelivr.net/npm/jquery/dist/jquery.min.js"></script>
    <!-- 引入font-awesome字体 -->
    <!-- <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/font-awesome/css/font-awesome.min.css"/> -->
    <link rel="stylesheet" href="https://cdn.bootcss.com/font-awesome/4.3.0/css/font-awesome.min.css">
    <script src="https://cdn.jsdelivr.net/gh/stevenjoezhang/live2d-widget/autoload.js"></script>
    <style type="text/css">
        /* 里面的代码应符合css格式规范 */
        /* 页面整体样式 */
        html,body,div,span,applet,object,iframe,h1,h2,h3,h4,h5,h6,p,blockquote,pre,a,abbr,acronym,address,big,cite,code,del,dfn,em,img,ins,kbd,q,s,samp,small,strike,strong,sub,sup,tt,var,b,u,i,center,dl,dt,dd,ol,ul,li,fieldset,form,label,legend,table,caption,tbody,tfoot,thead,tr,th,td,article,aside,canvas,details,embed,figure,figcaption,footer,header,hgroup,menu,nav,output,ruby,section,summary,time,mark,audio,video{margin:0;padding:0;border:0}body{font-family:Helvetica,arial,freesans,clean,sans-serif;font-size:16px;line-height:1.6;color:#333;padding:20px;max-width:960px;margin:0 auto}body>*:first-child{margin-top:0 !important}body>*:last-child{margin-bottom:0 !important}p,blockquote,ul,ol,dl,table,pre{margin:15px 0}h1,h2,h3,h4,h5,h6{margin:20px 0 10px;padding:0;font-weight:bold;-webkit-font-smoothing:antialiased}h1 tt,h1 code,h2 tt,h2 code,h3 tt,h3 code,h4 tt,h4 code,h5 tt,h5 code,h6 tt,h6 code{font-size:inherit}h1{font-size:28px;color:#000}h2{font-size:24px;border-bottom:1px solid #ccc;color:#000}h3{font-size:18px}h4{font-size:16px}h5{font-size:14px}h6{color:#777;font-size:14px}body>h2:first-child,body>h1:first-child,body>h1:first-child+h2,body>h3:first-child,body>h4:first-child,body>h5:first-child,body>h6:first-child{margin-top:0;padding-top:0}a:first-child h1,a:first-child h2,a:first-child h3,a:first-child h4,a:first-child h5,a:first-child h6{margin-top:0;padding-top:0}h1+p,h2+p,h3+p,h4+p,h5+p,h6+p{margin-top:10px}a{color:#4183c4;text-decoration:none}a:hover{text-decoration:underline}ul,ol{padding-left:30px}ul li>:first-child,ol li>:first-child,ul li ul:first-of-type,ol li ol:first-of-type,ul li ol:first-of-type,ol li ul:first-of-type{margin-top:0}ul ul,ul ol,ol ol,ol ul{margin-bottom:0}dl{padding:0}dl dt{font-size:14px;font-weight:bold;font-style:italic;padding:0;margin:15px 0 5px}dl dt:first-child{padding:0}dl dt>:first-child{margin-top:0}dl dt>:last-child{margin-bottom:0}dl dd{margin:0 0 15px;padding:0 15px}dl dd>:first-child{margin-top:0}dl dd>:last-child{margin-bottom:0}pre,code,tt{font-size:12px;font-family:Consolas,"Liberation Mono",Courier,monospace}code,tt{margin:0;padding:0;white-space:nowrap;border:1px solid #eaeaea;background-color:#f8f8f8;border-radius:3px}pre>code{margin:0;padding:0;white-space:pre;border:0;background:transparent}pre{background-color:#f8f8f8;border:1px solid #ccc;font-size:13px;line-height:19px;overflow:auto;padding:6px 10px;border-radius:3px}pre code,pre tt{background-color:transparent;border:0}blockquote{border-left:4px solid #DDD;padding:0 15px;color:#777}blockquote>:first-child{margin-top:0}blockquote>:last-child{margin-bottom:0}hr{clear:both;margin:15px 0;height:0;overflow:hidden;border:0;background:transparent;border-bottom:4px solid #ddd;padding:0}table th{font-weight:bold}table th,table td{border:1px solid #ccc;padding:6px 13px}table tr{border-top:1px solid #ccc;background-color:#fff}table tr:nth-child(2n){background-color:#f8f8f8}img{max-width:100%}    
        body {
            background-color:#e4f6ff
        }
        /* 动画画布样式 */
        canvas{
            position: static;
            width: 100%;
            height: 600px;
            background: #f4fffe;
        }
        /* 设置页面右侧滚动条样式 */
        /* 滚动条凹槽的颜色，还可以设置边框属性 */
        ::-webkit-scrollbar-track-piece { 
            background-color:#c8ebff;
        }
        /* 滚动条的宽高 */
        ::-webkit-scrollbar {
            width:15px;
            height:10px;
        }
        /* 滚动条内部小滑块 */
        ::-webkit-scrollbar-thumb {
            background-color:#0d71c4;
            background-clip:padding-box;
            min-height:28px;
            background-image: -webkit-linear-gradient(45deg, rgb(71, 227, 255) 25%, transparent 30%,transparent 70%, rgba(27, 73, 173, 0.979) 25%);
        }
        ::-webkit-scrollbar-thumb:hover {
            background-color:rgb(5, 155, 255);
        }
    </style>
    <title>Silence_Tang | 凛冬散尽，星河长明。</title>
    <link rel="shortcut icon" href="https://z3.ax1x.com/2021/07/18/W8UfJJ.png" type="image/x-icon">
    <link rel="icon" href="https://z3.ax1x.com/2021/07/18/W8UfJJ.png" type="image/x-icon">
    <link rel="apple-touch-icon" href="https://z3.ax1x.com/2021/07/18/W8UfJJ.png">
</head>

<body>
    <!-- 引入人物动画js -->
    <script src="https://www.html5tricks.com/demo/html5-person-joint/js/index.js"></script>
    <!-- 引入不蒜子计数 -->
    <script async src="//busuanzi.ibruce.info/busuanzi/2.3/busuanzi.pure.mini.js"></script>
    <!-- 引入旋转花瓣加载特效 -->
    <center>
        浏览量：<span id="busuanzi_value_site_pv"><i class="fa fa-spinner fa-spin"></i></span>👀 | 访客数：<span id="busuanzi_value_site_uv"><i class="fa fa-spinner fa-spin"></i></span>👦
    </center>
    <!-- 修正计数初始值 -->
    <!-- <script>
        $(document).ready(function() {
            var int = setinterval(fixcount, 50); // 50ms周期检测函数
            var countoffset = 1000; // 初始化首次数据
            function fixcount() {
                $("#busuanzi_value_site_pv").html(parseint($("#busuanzi_value_site_pv").html()) + countoffset);
                clearinterval(int);
                $("#busuanzi_value_site_uv").html(parseint($("#busuanzi_value_site_uv").html()) + countoffset); // 加上初始数据
                clearinterval(int); // 停止检测
            }
        });
    </script> -->
    <center><font size=8><font color=#00BFFF>↓</font><font color=#1E90FF>↓</font><font color=#00BFFF>↓</font></font></center>
    <hr>
        <div style="float:left;"><font size=4>Hello guys, welcom to my world !</font></div><!-- 左右浮动显示，使同一行文字部分居左部分居右 -->
        <div style="float:right;"><font size=4><a href="https://github.com/Silence-Tang">GitHub主页</a></font></div>
        <div align="center"><img src="https://z3.ax1x.com/2021/07/18/W8NOvq.jpg" alt="BG1" /></div>
        <center><font size=8 color=#1E90FF>Si</font><font size=8 color=#00BFFF>len</font><font size=8 color=#00FFF>ce</font><font size=8 color=#00FA9A>_</font></center>
        <center><font size=5>许我一溪风与月，醉里笑看云飞雪。</font></center>
        <p><img src="https://z3.ax1x.com/2021/07/18/W8U954.jpg" alt="BG2" /></p>
        <h1>一、个人简介 🙉</h1>
        <hr style="background: #3694f9;height:2px;border:none;">
        <p><img align="right" width=200 height=200 src="https://z3.ax1x.com/2021/07/18/W8UfJJ.png"></p>
        <ul><!--无序列表-->
            <font size=3>
                <li>学校：北京信息科技大学</li>
                <li>年级：2022级</li>
                <li>政治面貌：共青团员</li>
                <li>地区：北京</li>
            </font>
        </ul>
        <h1>二、联系方式 📱</h1>
        <hr style="background: #3694f9;height:2px;border:none;">
<pre>   <!--被包围在 pre 元素中的文本通常会保留空格和换行符-->
<code class="javascript"><font size=3 color=#000080>var WaysToContactMe = 
{
        phone  : "13240148030",
        qq     : "1803571189",
        wechat : "xijiaqi0904",
        mail   : "1803571189@qq.com"
};</font>
</code>
</pre>
        <h1>三、竞赛&amp;活动 🏆</h1>
        <h1>四、个人技能 ⭐️</h1>
        <hr style="background: #3694f9;height:2px;border:none;">
        <!--width:num值越小表格越靠右，反之靠左-->
        <div style="margin:0 auto;width:400px">
            <table align="center">
                <thead>
                    <tr>
                        <th align="center">技能</th>
                        <th align="center">熟练度</th>
                        <th align="center">技能</th>
                        <th align="center">熟练度</th></tr>
                </thead>
                <tbody>
                    <tr>
                        <td align="center">C语言</td>
                        <td align="center">●●●●●○○</td>
                        <td align="center">HTML/CSS/MD</td>
                        <td align="center">●●●●○○○</td>
                    </tr>
                    <tr>
                        <td align="center">Matlab</td>
                        <td align="center">●●●●●○○</td>
                        <td align="center">CET4</td>
                        <td align="center">621</td>
                    </tr>
                    <tr>
                        <td align="center">Python</td>
                        <td align="center">●●●●○○○</td>
                        <td align="center">CET6</td>
                        <td align="center">609</td>
                    </tr>
                    <tr>
                        <td align="center">Microsoft Office</td>
                        <td align="center">●●●●○○○</td>
                        <td align="center">🎤</td>
                        <td align="center">●●●●●●○</td>
                    </tr>
                </tbody>
            </table>
        </div>
        <h1>五、课程学习 🆒</h1>
        <h1>六、其他</h1>
        <!-- 下面是回到顶部代码-->
        <div style="float:left">
            <div id="totop">
                <a href="javascript:;" id="btn">回到顶部↑</a>
            </div>
        </div>
        <script type="text/javascript">
            window.onload = function () {
                // 1.找到页面中的按钮
                var totop = document.getElementById("btn");
                totop.style.display ="none";
                var timer = null;
                // 2. 给按钮绑定点击事件
                totop.onclick =function () {
                    // 周期性定时
                    timer = setInterval(function () {
                        // 3.获取滚动条距离浏览器顶端的距离
                        var backTop = document.documentElement.scrollTop || 
                        document.body.scrollTop;
                        // 越滚越慢
                        speedTop =backTop/5;
                        document.documentElement.scrollTop=backTop-speedTop;
                        if(backTop==0){
                            clearInterval(timer);
                        }
                    },30)
                }
                // 设置临界值
                var pageHeight =700;
                window.onscroll =function () {
                    var backTop = document.documentElement.scrollTop || 
                    document.body.scrollTop;
                    if(backTop>pageHeight){
                        totop.style.display="block";
                    }else{
                        totop.style.display="none";
                    }
                }
            }
        </script>
</body>
</html>
