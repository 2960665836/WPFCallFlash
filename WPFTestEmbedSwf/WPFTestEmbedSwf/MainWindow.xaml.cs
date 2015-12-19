using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WPFTestEmbedSwf
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            LoadSwf();
            //Debug.Print(Directory.GetCurrentDirectory() + "/../../assets/TestNB.exe");
        }

        private void LoadSwf()
        {
            this.flashShow.WMode = "direct";
            this.flashShow.LoadMovie(0, Directory.GetCurrentDirectory() + "/../../assets/SeeWoBusinessSwf.swf");
        }

        private void LoadFile1(object sender, RoutedEventArgs e)
        {
            String[] ary = {Directory.GetCurrentDirectory() + "/../../assets/nb1.nb"};
            CallNBUtil.call(flashShow, "loadNbFile", ary);
        }

        private void LoadFile2(object sender, RoutedEventArgs e)
        {
            String[] ary = { Directory.GetCurrentDirectory() + "/../../assets/nb2.nb" };
            CallNBUtil.call(flashShow, "loadNbFile", ary);
        }

        private void WindowsFormsHost_ChildChanged(object sender, System.Windows.Forms.Integration.ChildChangedEventArgs e)
        {

        }

        
    }
}
