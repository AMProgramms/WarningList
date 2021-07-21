﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Drawing;
using GongSolutions.Wpf.DragDrop;

namespace WpfApp1
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
       UserInfo user = new UserInfo();
       NewName nnr = new NewName();
       SernameD snr = new SernameD();
       NameD n = new NameD();

        double value, valueS, valueN;
        double ClickS;
        double NumberN;
        double result;
        double warning = 0;
        double Tresult;
        Random rand = new Random();
        string inf = "Inf.txt";
        string sizeN, sizeG,sizeH;
        bool delete = false;
        bool edit = false;
        bool name = false;
        bool enter = false;
        int Count = 13;
        int hit =0;
        bool Check;
        int cls, cls2;
        int check = 0;
        int lang = 0;
        int type = 0;
        int sizeS = 0, sizeC = 0,sizeR = -1;
        double TotalResult;
        
     
        public MainWindow()
        {
            //Language pick
            lang = Int32.Parse(File.ReadLines("Settings.txt").Skip(7).First());
            if (lang == 0)
            {
                System.Threading.Thread.CurrentThread.CurrentUICulture = System.Globalization.CultureInfo.GetCultureInfo("en-US");

            }
            if (lang == 1)
            {
                System.Threading.Thread.CurrentThread.CurrentUICulture = System.Globalization.CultureInfo.GetCultureInfo("ru-RU");

            }
            if (lang == 2)
            {
                System.Threading.Thread.CurrentThread.CurrentUICulture = System.Globalization.CultureInfo.GetCultureInfo("fr-FR");

            }
            if (lang == 3)
            {
                System.Threading.Thread.CurrentThread.CurrentUICulture = System.Globalization.CultureInfo.GetCultureInfo("de-DE");

            }
            if (lang == 4)
            {
                System.Threading.Thread.CurrentThread.CurrentUICulture = System.Globalization.CultureInfo.GetCultureInfo("uk-UA");

            }

            InitializeComponent();
            check = Int32.Parse(File.ReadLines("Settings.txt").Skip(1).First());
            type = Int32.Parse(File.ReadLines("Settings.txt").Skip(9).First());
           
            ColorPick.IsEnabled = false;
            ColorPick.Visibility = Visibility.Hidden;
            Namer.IsEnabled = false;
            listbox.IsEnabled = false;
            EnterC.IsEnabled = false;
            Menu.IsEnabled = false;
            //English
            if(type == 1)
            {
                D1.Content = "1";
                D2.Content = "2";
                D2.Background = Brushes.HotPink;
                D3.Content = "3";
                D3.Background = Brushes.Orange;
                C1.Content = "4";
                C1.Background = Brushes.Yellow;
                C2.Visibility = Visibility.Visible;
                C3.Visibility = Visibility.Visible;
                B1.Visibility = Visibility.Visible;
                T1.Visibility = Visibility.Visible;
                T2.Visibility = Visibility.Visible;
                T3.Visibility = Visibility.Visible;
                T4.Visibility = Visibility.Visible;
                T5.Visibility = Visibility.Visible;
                T6.Visibility = Visibility.Visible;
                T7.Visibility = Visibility.Visible;
                Score.Height = 210;
                Score.Margin = new Thickness(162,197,0,0);
            }
            //French
            if (type == 2)
            {
                D1.Content = "1";
                D2.Content = "2";
                D3.Content = "3";
                C1.Content = "4";
                C1.Background = Brushes.Cyan;
                C2.Content = "5";
                C2.Background = Brushes.Blue;
                C2.Visibility = Visibility.Visible;
                T1.Visibility = Visibility.Visible;
                T1.Text = "(<7)";
                T1.Width = 22;
                T2.Visibility = Visibility.Visible;
                T2.Text = "(9-7)";
                T2.Width = 25;
                T3.Visibility = Visibility.Visible;
                T3.Text = "(13-10)";
                T3.Width = 38;
                T4.Visibility = Visibility.Visible;
                T4.Text = "(16-14)";
                T4.Width = 38;
                T5.Visibility = Visibility.Visible;
                T5.Text = "(20-17)";
                T5.Width = 38;
                Score.Height = 255;
                Score.Margin = new Thickness(162, 152, 0, 0);
            }
            //German
            if (type == 3)
            {
                D1.Content = "0";
                D2.Content = "3";
                D2.Background = Brushes.Orange;
                D3.Content = "6";
                D3.Background = Brushes.Yellow;
                C1.Content = "9";
                C1.Background = Brushes.Green;
                C2.Content = "12";
                C2.Background = Brushes.Cyan;
                C3.Content = "15";
                C3.Background = Brushes.Blue;
                C3.Visibility = Visibility.Visible;
                C2.Visibility = Visibility.Visible;
                T1.Visibility = Visibility.Visible;
                T1.Text = "(6)";
                T2.Visibility = Visibility.Visible;
                T1.Text = "(5)";
                T3.Visibility = Visibility.Visible;
                T1.Text = "(4)";
                T4.Visibility = Visibility.Visible;
                T1.Text = "(3)";
                T5.Visibility = Visibility.Visible;
                T1.Text = "(2)";
                T6.Visibility = Visibility.Visible;
                T1.Text = "(1)";
                Score.Height = 235;
                Score.Margin = new Thickness(162, 172, 0, 0);
            }
            //Ukraine
            if (type == 4)
            {
                D1.Content = "1";
                D2.Content = "2";
                D2.Background = Brushes.HotPink;
                D3.Content = "3";
                D3.Background = Brushes.Pink;
                C1.Content = "4";
                C1.Background = Brushes.DarkOrange;
                C2.Content = "5";
                C2.Background = Brushes.Orange;
                C3.Content = "6";
                C3.Background = Brushes.Yellow;
                B1.Content = "7";
                B1.Background = Brushes.GreenYellow;
                B2.Content = "8";
                B2.Background = Brushes.LightGreen;
                B3.Content = "9";
                B3.Background = Brushes.DarkGreen;
                A1.Content = "10";
                A1.Background = Brushes.Cyan;
                A2.Content = "11";
                A2.Background = Brushes.Blue;
                A3.Content = "12";
                A3.Background = Brushes.DarkBlue;
                C2.Visibility = Visibility.Visible;
                C3.Visibility = Visibility.Visible;
                B1.Visibility = Visibility.Visible;
                B2.Visibility = Visibility.Visible;
                B3.Visibility = Visibility.Visible;
                A1.Visibility = Visibility.Visible;
                A2.Visibility = Visibility.Visible;
                A3.Visibility = Visibility.Visible;
                Score.Height = 85;
                Score.Margin = new Thickness(162, 322, 0, 0);
            }
            //Russian
            foreach (UIElement el in Root.Children)
                {
                    if (el is Button)
                    {
                    ((Button)el).Click += Button_Click;
                    ((Button)el).IsEnabled = false;

                    }

                }

            if (check == 1)
            {
                Debug.Visibility = Visibility.Visible;
            }
          

        }
        private void TextBox_MouseEnter(object sender, MouseEventArgs e)
        {
            Namer.Clear();
           
        }
        //Functions add and edit
        private void Namer_KeyDown(object sender, KeyEventArgs e)
        {
            if (name == true)
            {
                if (e.Key == Key.Enter)
                {
                    sizeH = Namer.Text;
                  
                    //listbox.Items.Add(sizeN);
                    Lister.Items.Add("-");
                    listbox.Items.Add(new ListBoxItem() { Content = sizeH, Background = Brushes.Red });
                    listbox.SelectedItem = sizeH;
                    Count++;
                    Namer.IsEnabled = false;
                    listbox.IsEnabled = true;
                    name = false;
                }
            }
            if (edit == true)
            {
                DialogeW.Text = Properties.Resources.Dialoge2;
                if (e.Key == Key.Enter)
                {

                    sizeG = Namer.Text;
                    listbox.Items.Insert(listbox.SelectedIndex, new ListBoxItem() { Content = sizeG, Background = Brushes.Red});
                    listbox.Items.Remove(listbox.SelectedItem);
                    Namer.IsEnabled = false;
                    listbox.IsEnabled = true;

                }
               
            }
        }

        protected override void OnClosing(CancelEventArgs e)
        {
            var response = MessageBox.Show(Properties.Resources.Message1, Properties.Resources.Box1,MessageBoxButton.YesNo, MessageBoxImage.Exclamation);
            if (response == MessageBoxResult.No)
            {
                e.Cancel = true;
            }
            else
            {
                Application.Current.Shutdown();
            }

            base.OnClosing(e);
        }
        //Function name and surname input 
        private void Name_MouseEnter(object sender, MouseEventArgs e)
        {
            n.Show();
            if(Sername.Text != null)
            {
              
                Name.IsEnabled = false;
                Menu.IsEnabled = true;
                Id.Text = rand.Next(10000).ToString();
              
                listbox.IsEnabled = true;
                check = Int32.Parse(File.ReadLines("Settings.txt").Skip(1).First());
             
   
                if (check == 1)
                {
                    Debug.Visibility = Visibility.Visible;
                }
             
            
            }
        }
        //Functon delete for Lister
        private void Score_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            
            DialogeW.Text = Properties.Resources.Dialoge3;
                MessageBoxResult result = MessageBox.Show(Properties.Resources.Sure, Properties.Resources.Box2, MessageBoxButton.YesNo, MessageBoxImage.Warning);
                switch (result)
                {
                    case MessageBoxResult.Yes:


                    // Score.SelectedItem = false;
                    value -= Int32.Parse(Score.SelectedItem.ToString());
                    Score.Items.Remove(Score.SelectedItem);
                  
                    ClickS--;
                        DialogeW.Text = Properties.Resources.Dialoge4;
                  

                    break;
                    case MessageBoxResult.No:
                        Score.SelectedItem = false;
                        DialogeW.Text = Properties.Resources.Dialoge4;
                        
                        break;

                }
            result = MessageBoxResult.No;


        }

   //Background pick
        private void Background_Checked(object sender, RoutedEventArgs e)
        {
            Root.Background = Brushes.Black;
            Menu.Background = Brushes.White;
            Lister.Foreground = Brushes.White;
            EnterC.Foreground = Brushes.White;
            Textbox1.Foreground = Brushes.White;
            Name.Foreground = Brushes.White;
            Sername.Foreground = Brushes.White;
            Id.Foreground = Brushes.White;
            Namer.Foreground = Brushes.White;
            Result.Foreground = Brushes.White;
            DialogeW.Foreground = Brushes.White;
            GEN.Foreground = Brushes.White;
            Score.Foreground = Brushes.White;
       
        }
        private void Background_Unchecked(object sender, RoutedEventArgs e)
        {
            Root.Background = Brushes.White;
            Menu.Background = Brushes.Gray;
            Lister.Foreground = Brushes.Black;
            EnterC.Foreground = Brushes.Black;
            Textbox1.Foreground = Brushes.Black;
            Name.Foreground =  Brushes.Black; 
            Sername.Foreground = Brushes.Black;
            Id.Foreground = Brushes.Black;
            Namer.Foreground = Brushes.Black;
            Result.Foreground = Brushes.Black;
            DialogeW.Foreground = Brushes.Black;
            GEN.Foreground = Brushes.Black;
            Score.Foreground = Brushes.Black;
        }
        
        //Mouse right click menu
        private void Add_Click(object sender, RoutedEventArgs e)
        {
            MessageBoxResult result = MessageBox.Show(Properties.Resources.Sure, Properties.Resources.Box2, MessageBoxButton.YesNo, MessageBoxImage.Warning);
            switch (result)
            {
                case MessageBoxResult.Yes:

                    listbox.IsEnabled = false;
                    Namer.IsEnabled = true;
                    name = true;
                    DialogeW.Text = Properties.Resources.Dialoge5;

                    break;
                case MessageBoxResult.No:

                    break;
            }
        }
        private void Delete_Click(object sender, RoutedEventArgs e)
        {
            MessageBoxResult result = MessageBox.Show(Properties.Resources.Sure, Properties.Resources.Box2, MessageBoxButton.YesNo, MessageBoxImage.Warning);
            switch (result)
            {
                case MessageBoxResult.Yes:
                    delete = true;
                    listbox.IsEnabled = true;
                    DialogeW.Text = Properties.Resources.Dialoge6;
                    break;
                case MessageBoxResult.No:

                    break;
            }
        }
        private void Edit_Click(object sender, RoutedEventArgs e)
        {
            MessageBoxResult result = MessageBox.Show(Properties.Resources.Sure, Properties.Resources.Box2, MessageBoxButton.YesNo, MessageBoxImage.Warning);
            switch (result)
            {
                case MessageBoxResult.Yes:
                    edit = true;
                    //listbox.IsEnabled = true;
                    listbox.IsEnabled = false;
                    Namer.IsEnabled = true;
                    DialogeW.Text = Properties.Resources.Dialoge7;
                    //nnr.Show();
                    
                    break;
                case MessageBoxResult.No:

                    break;
            }
        }
        //Fonts pick
        private void bold_Click(object sender, RoutedEventArgs e)
        {
            listbox.FontWeight = FontWeights.Bold;
            Menu.FontWeight = FontWeights.Bold;
            Lister.FontWeight = FontWeights.Bold;
            EnterC.FontWeight = FontWeights.Bold;
            Textbox1.FontWeight = FontWeights.Bold;
            Name.FontWeight = FontWeights.Bold;
            Sername.FontWeight = FontWeights.Bold;
            Id.FontWeight = FontWeights.Bold;
            Namer.FontWeight = FontWeights.Bold;
            Result.FontWeight = FontWeights.Bold;
            GEN.FontWeight = FontWeights.Bold;
            Score.FontWeight = FontWeights.Bold;
        }

        private void italic_Click(object sender, RoutedEventArgs e)
        {
            listbox.FontStyle = FontStyles.Italic;
            Menu.FontStyle = FontStyles.Italic;
            Lister.FontStyle = FontStyles.Italic;
            EnterC.FontStyle = FontStyles.Italic;
            Textbox1.FontStyle = FontStyles.Italic;
            Name.FontStyle = FontStyles.Italic;
            Sername.FontStyle = FontStyles.Italic;
            Id.FontStyle = FontStyles.Italic;
            Namer.FontStyle = FontStyles.Italic;
            Result.FontStyle = FontStyles.Italic;
            GEN.FontStyle = FontStyles.Italic;
            Score.FontStyle = FontStyles.Italic;
        }

        private void underline_Click(object sender, RoutedEventArgs e)
        {
            EnterC.TextDecorations = TextDecorations.Underline;
            Textbox1.TextDecorations = TextDecorations.Underline;
            Name.TextDecorations = TextDecorations.Underline;
            Sername.TextDecorations = TextDecorations.Underline;
            Id.TextDecorations = TextDecorations.Underline;
            Namer.TextDecorations = TextDecorations.Underline;
            Result.TextDecorations = TextDecorations.Underline;
            GEN.TextDecorations = TextDecorations.Underline;
        }

        private void normal_Click(object sender, RoutedEventArgs e)
        {
            listbox.FontWeight = FontWeights.Normal; 
            Menu.FontWeight = FontWeights.Normal;
            Lister.FontWeight = FontWeights.Normal;
            EnterC.FontWeight = FontWeights.Normal;
            Textbox1.FontWeight = FontWeights.Normal;
            Name.FontWeight = FontWeights.Normal;
            Sername.FontWeight = FontWeights.Normal;
            Id.FontWeight = FontWeights.Normal;
            Namer.FontWeight = FontWeights.Normal;
            Result.FontWeight = FontWeights.Normal;
            GEN.FontWeight = FontWeights.Normal;
            Score.FontWeight = FontWeights.Normal;
            listbox.FontStyle = FontStyles.Normal;
            Menu.FontStyle = FontStyles.Normal;
            Lister.FontStyle = FontStyles.Normal;
            EnterC.FontStyle = FontStyles.Normal;
            Textbox1.FontStyle = FontStyles.Normal;
            Name.FontStyle = FontStyles.Normal;
            Sername.FontStyle = FontStyles.Normal;
            Id.FontStyle = FontStyles.Normal;
            Namer.FontStyle = FontStyles.Normal;
            Result.FontStyle = FontStyles.Normal;
            GEN.FontStyle = FontStyles.Normal;
            Score.FontStyle = FontStyles.Normal;
            EnterC.TextDecorations = null;
            Textbox1.TextDecorations = null;
            Name.TextDecorations = null;
            Sername.TextDecorations = null;
            Id.TextDecorations = null;
            Namer.TextDecorations = null;
            Tres.TextDecorations = null;
            GEN.TextDecorations = null;
        
    }
        private void ColorPick_MouseDown(object sender, MouseButtonEventArgs e)
        {
            
                MessageBoxResult result = MessageBox.Show(Properties.Resources.Sure, Properties.Resources.Box2, MessageBoxButton.YesNo, MessageBoxImage.Warning);
                switch (result)
                {
                    case MessageBoxResult.Yes:
                ColorPick.IsEnabled = false;
                ColorPick.Visibility = Visibility.Hidden;
                cls = 0;
                cls2 = 0;
                        break;
                    case MessageBoxResult.No:
                        
                        break;

            }
            
        }


        //Debug functions
        private void Reset_Click(object sender, RoutedEventArgs e)
        {

            Lister.Items.Clear();
            for(int g= 0; g < listbox.Items.Count; g++)
            {
                Lister.Items.Add("-");
            }
            GEN.Clear();
            Tresult = 0;
               

        }
    
        private void Complete_Click(object sender, RoutedEventArgs e)
        {
            sizeS = Count;
        }
        //Color pick
        private void AE_Click(object sender, RoutedEventArgs e)
        {
            ColorPick.IsEnabled = true;
            ColorPick.Visibility = Visibility.Visible;
            Namer.IsEnabled = true;
            listbox.IsEnabled = true;
            EnterC.IsEnabled = true;
            Menu.IsEnabled = true;
            GEN.IsReadOnly = false;
            Namer.IsReadOnly = false;
            Namer.IsEnabled = true;
            Sername.IsReadOnly = true;
            Name.IsReadOnly = true;
            foreach (UIElement el in Root.Children)
            {
                if (el is Button)
                {
                
                    ((Button)el).IsEnabled = true;


                }

            }
        }
        //Menu Color
        private void Color_Click(object sender, RoutedEventArgs e)
        {
            ColorPick.IsEnabled = true;
            ColorPick.Visibility = Visibility.Visible;
     
            cls2++;
        }
        //Menu Font
        private void FontColor_Click(object sender, RoutedEventArgs e)
        {
            ColorPick.IsEnabled = true;
            ColorPick.Visibility = Visibility.Visible;
            cls++;
        }

        
        //ColorPicker
        private void ColorPick_SelectedColorChanged(object sender, RoutedPropertyChangedEventArgs<Color?> e)
        {
            if (cls == 1)
            {
                string c1 = ColorPick.SelectedColor.Value.ToString();
              
                    SolidColorBrush ck = (SolidColorBrush)new BrushConverter().ConvertFromString(c1);
                    Lister.Foreground = ck;
                    EnterC.Foreground = ck;
                    Textbox1.Foreground = ck;
                    Name.Foreground = ck;
                    Sername.Foreground = ck;
                    Id.Foreground = ck;
                    Namer.Foreground = ck;
                    Tres.Foreground = ck;
                    DialogeW.Foreground = ck;
                    GEN.Foreground = ck;
                    Score.Foreground = ck;

                DialogeW.Text = Properties.Resources.Dialoge8;
            }
            if(cls2 == 1)
            {
                string c1 = ColorPick.SelectedColor.Value.ToString();
                SolidColorBrush ck = (SolidColorBrush)new BrushConverter().ConvertFromString(c1);

                ListBoxItem lbi = listbox.Items[listbox.SelectedIndex] as ListBoxItem;
                lbi.Background = ck;
                DialogeW.Text = Properties.Resources.Dialoge8;

            }


            DialogeW.Text = Properties.Resources.Dialoge2;



        }
        //Count elements in array
        private void EnterC_MouseEnter(object sender, MouseEventArgs e)
        {
            EnterC.Clear();
        }

        private void EnterC_KeyDown_1(object sender, KeyEventArgs e)
        {

            if (e.Key == Key.Enter)
            {
                sizeC = Int32.Parse(EnterC.Text);
                if (sizeC < 3)
                {
                    DialogeW.Text = Properties.Resources.Dialoge9;
                    EnterC.Clear();
                }
                else 
                {

                    DialogeW.Text = Properties.Resources.Dialoge4;
                    EnterC.IsEnabled = false;
                    foreach (UIElement el in Root.Children)
                    {
                        if (el is Button)
                        {
                            ((Button)el).IsEnabled = true;
                        }

                    }
                }

            }
        }

       
        //Main Selection
        private void ListBox_SelectionChanged1(object sender, SelectionChangedEventArgs e)
        {

            sizeN = File.ReadAllText(@"Newname.txt");           
            Name.Text = File.ReadAllText(@"Name.txt");
            Sername.Text = File.ReadAllText(@"Sername.txt");
            cls = 0;
            cls2 = 0;
            //Delete fuction
            if (delete == true)
            {
             
                listbox.Items.Remove(listbox.SelectedItem);
                Lister.Items.Remove(listbox.SelectedItem);
                Count--;
                DialogeW.Text = Properties.Resources.Dialoge2;
                
            }
           //Item pick
            else
            {
                DialogeW.Text = Properties.Resources.Dialoge2;
                MessageBoxResult result = MessageBox.Show(Properties.Resources.Sure, Properties.Resources.Box2, MessageBoxButton.YesNo, MessageBoxImage.Warning);
                switch (result)
                {
                    case MessageBoxResult.Yes:
                        foreach (UIElement el in Root.Children)
                        {
                            if (el is Button)
                            {

                                ((Button)el).IsEnabled = false;

                            }

                        }
                        EnterC.IsEnabled = true;
                        listbox.IsEnabled = false;
                        break;
                    case MessageBoxResult.No:
                        listbox.SelectedItem = false;
                        break;

                }
            }
            edit = false;
            delete = false;
            // Total Result
            if (sizeS == Count)
            {
                
                TotalResult /= Count;
                TotalResult = Math.Round(TotalResult, 2);
                //Russian
                if (type == 0)
                {
                    if (TotalResult <= 2.5)
                    {
                        Tres.Foreground = Brushes.Red;
                        Tres.Text = TotalResult.ToString();
                    }
                    else if (TotalResult <= 3.5)
                    {
                        Tres.Foreground = Brushes.Orange;
                        Tres.Text = TotalResult.ToString();
                    }
                    else if (TotalResult <= 4.5)
                    {
                        Tres.Foreground = Brushes.Green;
                        Tres.Text = TotalResult.ToString();
                    }
                    else if (TotalResult <= 5)
                    {
                        Tres.Foreground = Brushes.LightBlue;
                        Tres.Text = TotalResult.ToString();
                    }
                    else
                    {
                        Tres.Foreground = Brushes.DarkRed;
                        Tres.Text = "-";
                    }
                }
                //English GPA
                if(type == 1)
                {
                    if (TotalResult <= 1.5)
                    {
                        Tres.Foreground = Brushes.Red;
                        Tres.Text = "F";
                    }
                    else if (TotalResult > 1.5)
                    {
                        Tres.Foreground = Brushes.HotPink;
                        Tres.Text = "E";
                    }
                    else if (TotalResult <= 2.5)
                    {
                        Tres.Foreground = Brushes.Orange;
                        Tres.Text = "D";
                    }
                    else if (TotalResult < 3 && TotalResult > 2.5)
                    {
                        Tres.Foreground = Brushes.DarkOrange;
                        Tres.Text = "D+";
                    }
                    else if (TotalResult <= 3.5)
                    {
                        Tres.Foreground = Brushes.Yellow;
                        Tres.Text = "C";
                    }
                    else if (TotalResult < 4 && TotalResult > 3.5)
                    {
                        Tres.Foreground = Brushes.Yellow;
                        Tres.Text = "C+";
                    }
                    else if (TotalResult <= 4.5)
                    {
                        Tres.Foreground = Brushes.Green;
                        Tres.Text = "B";
                    }
                    else if (TotalResult < 5 && TotalResult > 4.5)
                    {
                        Tres.Foreground = Brushes.DarkOliveGreen;
                        Tres.Text = "B+";
                    }
                    else if (TotalResult <= 5.5)
                    {
                        Tres.Foreground = Brushes.Cyan;
                        Tres.Text = "A";
                    }
                    else if (TotalResult > 5.5)
                    {
                        Tres.Foreground = Brushes.Blue;
                        Tres.Text = "A*";
                    }
                }
                
            }
            
        }
//(c)AMProgramms, 2021
//Ultra main fuctions
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string s = (string)((Button)e.OriginalSource).Content;
            ClickS++;
            NumberN = ClickS;
            value += Int32.Parse(s);
            valueN = Int32.Parse(s);
            Clicker.Text = ClickS.ToString();
            Textbox1.Text = value.ToString();
            GEN.Clear();
            Score.Items.Add(valueN);
           

            if (ClickS == sizeC)
                {
               
                result = value / ClickS ;
               result = Math.Round(result, 2);
                valueS = value;
                
               
                TotalResult += result;
                //Russian
                if (type == 0)
                {
                    if (result <= 2.5)
                    {

                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen1 + "\r\n";

                        for (; warning < 2.6;)
                        {
                            warning = (valueS + 3) / (NumberN + 1);
                            valueS += 3;
                            NumberN += 1;
                            GEN.Text += Properties.Resources.GenN + 3 + Properties.Resources.GenF + warning + "\r\n";
                        }
                        warning = 0;

                    }
                    else if (result <= 3.5)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen2 + "3" + "\r\n";

                        for (; warning < 3.6;)
                        {
                            warning = (valueS + 4) / (NumberN + 1);
                            valueS += 4;
                            NumberN += 1;
                            GEN.Text += Properties.Resources.GenN + 4 + Properties.Resources.GenF + warning + "\r\n";
                        }

                        warning = 0;

                    }
                    else if (result <= 4.5)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen3 + "4" + "\r\n";

                        for (; warning < 4.6;)
                        {
                            warning = (valueS + 5) / (NumberN + 1);
                            valueS += 5;
                            NumberN += 1;
                            GEN.Text += Properties.Resources.GenN + 5 + Properties.Resources.GenF + warning + "\r\n";
                        }
                        warning = 0;

                    }
                    else
                    {

                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen4 + "\r\n";

                    }
                    Lister.Items[listbox.SelectedIndex] = result;
                }
                //English
                if (type == 1)
                {
                    if (result < 2)
                    {

                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen1 + " - " + "F" + "\r\n";

                        for (; warning <= 1.5;)
                        {
                            warning = (valueS + 2) / (NumberN + 2);
                            valueS += 2;
                            NumberN += 1;
                            warning = Math.Round(warning, 2);
                            GEN.Text += Properties.Resources.GenN + "E" + Properties.Resources.GenF + warning + "\r\n";

                        }
                        warning = 0;

                    }
                    else if (result < 3)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen2 + "E" + "\r\n";

                        for (; warning <= 2.5;)
                        {
                            warning = (valueS + 3) / (NumberN + 3);
                            valueS += 3;
                            NumberN += 1;
                            warning = Math.Round(warning, 2);
                            GEN.Text += Properties.Resources.GenN + "D" + Properties.Resources.GenF + warning + "\r\n";
                        }

                        warning = 0;

                    }
                    else if (result < 4)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen3 + "D" + "\r\n";

                        for (; warning < 3.5;)
                        {
                            warning = (valueS + 4) / (NumberN + 4);
                            valueS += 4;
                            NumberN += 1;
                            warning = Math.Round(warning, 2);
                            GEN.Text += Properties.Resources.GenN + "C" + Properties.Resources.GenF + warning + "\r\n";
                        }
                        warning = 0;

                    }
                    else if (result < 5)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen3 + "C" + "\r\n";

                        for (; warning < 4.5;)
                        {
                            warning = (valueS + 5) / (NumberN + 5);
                            valueS += 5;
                            NumberN += 1;
                            warning = Math.Round(warning, 2);
                            GEN.Text += Properties.Resources.GenN + "B" + Properties.Resources.GenF + warning + "\r\n";
                        }
                        warning = 0;

                    }
                    else if (result <= 6)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen3 + "B" + "\r\n";

                        for (; warning < 5.5;)
                        {
                            warning = (valueS + 6) / (NumberN + 6);
                            valueS += 6;
                            NumberN += 1;
                            warning = Math.Round(warning, 2);
                            GEN.Text += Properties.Resources.GenN + "A" + Properties.Resources.GenF + warning + "\r\n";
                        }
                        warning = 0;

                    }
                    else if (result < 7)
                    {
                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen3 + "A" + "\r\n";

                        for (; warning <= 6.5;)
                        {
                            warning = (valueS + 7) / (NumberN + 7);
                            valueS += 7;
                            NumberN += 1;
                            warning = Math.Round(warning, 2);
                            GEN.Text += Properties.Resources.GenN + "A*" + Properties.Resources.GenF + warning + "\r\n";
                        }
                        warning = 0;

                    }
                    else
                    {

                        GEN.Text = Properties.Resources.Gen + result + "\r\n";
                        GEN.Text += Properties.Resources.Gen4 + " - " + "A*" + "\r\n";

                    }
                    if (result <= 1.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "F";
                    }
                    else if (result < 2 && result > 1.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "E";
                    }
                    else if (result <= 2.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "D";
                    }
                    else if (result < 3 && result > 2.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "D+";
                    }
                    else if (result < 3 && result >= 2.9)
                    {
                        Lister.Items[listbox.SelectedIndex] = "C-";
                    }
                    else if (result <= 3.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "C";
                    }
                    else if (result < 4 && result > 3.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "C+";
                    }
                    else if (result < 4 && result >= 3.9)
                    {
                        Lister.Items[listbox.SelectedIndex] = "B-";
                    }
                    else if (result <= 4.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "B";
                    }
                    else if (result < 5 && result > 4.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "B+";
                    }
                    else if (result < 5 && result >= 4.9)
                    {
                        Lister.Items[listbox.SelectedIndex] = "A-";
                    }
                    else if (result <= 5.5)
                    {
                        Lister.Items[listbox.SelectedIndex] = "A";
                    }
                    else if (result <= 6 && result > 6.9)
                    {
                        Lister.Items[listbox.SelectedIndex] = "A*";
                    }
                    else if (result == 6)
                    {
                        Lister.Items[listbox.SelectedIndex] = "A*";
                    }
                          
                    
                }
                value = 0;
                result = 0;
                ClickS = 0;
                sizeC = 0;
                sizeS++;
                EnterC.IsEnabled = true;
                foreach (UIElement el in Root.Children)
                {
                    if (el is Button)
                    {
                        ((Button)el).IsEnabled = false;
                    }

                }
                EnterC.Clear();
                EnterC.IsEnabled = false;
                listbox.IsEnabled = true;
                Score.Items.Clear();
            }

            
            
        }

       
    }
}
//(c)AMProgramms, 2021