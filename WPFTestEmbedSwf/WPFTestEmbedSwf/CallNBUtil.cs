using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AxShockwaveFlashObjects;
using System.Diagnostics;

namespace WPFTestEmbedSwf
{
    class CallNBUtil
    {
        public static void call(AxShockwaveFlash obj, String funcName, String[] ary)
        {
            //"<invoke name=\"setPath\" returntype=\"void\"><arguments><string>test</string></arguments></invoke>"
            String str = "<invoke name=\"" + funcName + "\" returntype=\"void\">";
            if (ary.Length > 0)
            {
                str += "<arguments>";
                for (int i = 0; i < ary.Length; i ++)
                {
                    str += "<string>" + ary[i] + "</string>";
                }
                str += "</arguments>";
            }
            str += "</invoke>";
            obj.CallFunction(str);
        }
    }
}
