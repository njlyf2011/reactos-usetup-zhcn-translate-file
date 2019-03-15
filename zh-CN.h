#pragma once

static MUI_ENTRY zhCNSetupInitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        20,
        "请等待安装程序初始化并检测硬件...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        0,
        "请稍候...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNLanguagePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "选择语言",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  请选择安装过程中所使用的语言，",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   并按 ENTER 键。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  所选语言将会成为安装后系统的默认语言。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续  F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNWelcomePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "欢迎使用 ReactOS 安装程序",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "This part of the setup copies the ReactOS Operating System to your",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "computer and prepares the second part of the setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  请按 ENTER 安装或升级 ReactOS。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
     // "\x07  Press R to repair a ReactOS installation using the Recovery Console.",
        "\x07  请按 R 修复当前 ReactOS 安装。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press L to view the ReactOS Licensing Terms and Conditions.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "想要了解更多信息，请访问:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "http://www.reactos.org",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "ENTER = 继续  R = 修复  L = 许可证  F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNIntroPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS 版本状态",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "ReactOS 正处于 Alpha 状态，也就意味着它功能不完善且正在进行重度开发。所以推荐您",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "仅将 ReactOS 用作评估或测试而不是当作日常使用的操作系统。"
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "如果您想在真实硬件上运行 ReactOS，请注意备份您的数据。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  请按 ENTER 继续安装程序。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  请按 F3 取消安装 ReactOS。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNLicensePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "许可:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "The ReactOS System is licensed under the terms of the",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "GNU GPL with parts containing code from other compatible",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "licenses such as the X11 or BSD and GNU LGPL licenses.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "All software that is part of the ReactOS system is",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "therefore released under the GNU GPL as well as maintaining",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "the original license.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "This software comes with NO WARRANTY or restrictions on usage",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "save applicable local and international law. The licensing of",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "ReactOS only covers distribution to third parties.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "If for some reason you did not receive a copy of the",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "GNU General Public License with ReactOS please visit",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        22,
        "警告:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        24,
        "This is free software; see the source for copying conditions.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "There is NO warranty; not even for MERCHANTABILITY or",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        26,
        "FITNESS FOR A PARTICULAR PURPOSE",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 返回",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNDevicePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "The list below shows the current device settings.",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "计算机:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "显示:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "键盘:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "键盘区域:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "接受:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16, "接受这些硬件设置",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "You can change the hardware settings by pressing the UP or DOWN keys",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "to select an entry. Then press the ENTER key to select alternative",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "settings.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "When all settings are correct, select \"Accept these device settings\"",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "and press ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNRepairPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Setup is in an early development phase. It does not yet",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "support all the functions of a fully usable setup application.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "The repair functions are not implemented yet.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  请按 U 更新操作系统。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  请按 R 进入故障恢复控制台。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  请按 ESC 键返回主页。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  请按 ENTER 重新启动您的计算机",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = 主页  U = 更新  R = 恢复  ENTER = 重启",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNUpgradePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "安装程序可以更新下列任一已经安装的 ReactOS 操作系统",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "listed below, or, if a ReactOS installation is damaged, the Setup program",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "can attempt to repair it.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "The repair functions are not all implemented yet.",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        15,
        "\x07  Press UP or DOWN to select an OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press U for upgrading the selected OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ESC to continue with a new installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "U = 升级   ESC = 不执行升级   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNComputerPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "您可以更改即将安装的计算机类型。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  请按向上或向下键选择所需的计算机类型。",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   然后按 ENTER 键",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Press the ESC key to return to the previous page without changing",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   the computer type.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   ESC = 取消   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNFlushPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "系统正在确保所有数据都以复制到磁盘上。",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "这可能需要一段时间。",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "计算机将会在操作完成时自动重启。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "正在刷新缓存",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNQuitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS is not completely installed.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Remove floppy disk from Drive A: and",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "all CD-ROMs from CD-Drives.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "请按 ENTER 重新启动您的计算机。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "请稍候...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNDisplayPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You want to change the type of display to be installed.",
        TEXT_STYLE_NORMAL
    },
    {   8,
        10,
         "\x07  Press the UP or DOWN key to select the desired display type.",
         TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Then press ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Press the ESC key to return to the previous page without changing",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   the display type.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   ESC = 取消   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNSuccessPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS 基础组件已经安装完毕。",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "请从软盘驱动器 A 和光驱中移除所有磁盘。",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "请按 ENTER 重新启动您的计算机。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 重启计算机",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNBootPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Setup cannot install the bootloader on your computers",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "hardisk",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "Please insert a formatted floppy disk in drive A: and",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "press ENTER.",
        TEXT_STYLE_NORMAL,
    },
    {
        0,
        0,
        "ENTER = 继续   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY zhCNSelectPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "The list below shows existing partitions and unused disk",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "space for new partitions.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  Press UP or DOWN to select a list entry.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Press ENTER to install ReactOS onto the selected partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press P to create a primary partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press E to create an extended partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press L to create a logical partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press D to delete an existing partition.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Please wait...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You have chosen to delete the system partition.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "System partitions can contain diagnostic programs, hardware configuration",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "programs, programs to start an operating system (like ReactOS) or other",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "programs provided by the hardware manufacturer.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Delete a system partition only when you are sure that there are no such",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "programs on the partition, or when you are sure you want to delete them.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "When you delete the partition, you might not be able to boot the",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "computer from the harddisk until you finished the ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Press ENTER to delete the system partition. You will be asked",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "   to confirm the deletion of the partition again later.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Press ESC to return to the previous page. The partition will",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "   not be deleted.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER=Continue  ESC=Cancel",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNFormatPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Format partition",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "Setup will now format the partition. Press ENTER to continue.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY zhCNInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Setup installs ReactOS files onto the selected partition. Choose a",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "directory where you want ReactOS to be installed:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "To change the suggested directory, press BACKSPACE to delete",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "characters and then type the directory where you want ReactOS to",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "be installed.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNFileCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        12,
        "Please wait while ReactOS Setup copies files to your ReactOS",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        13,
        "installation folder.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        14,
        "This may take several minutes to complete.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 Please wait...    ",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNBootLoaderEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Setup is installing the boot loader",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "Install bootloader on the harddisk (MBR and VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "Install bootloader on the harddisk (VBR only).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "Install bootloader on a floppy disk.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "Skip install bootloader.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You want to change the type of keyboard to be installed.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Press the UP or DOWN key to select the desired keyboard type.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Then press ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Press the ESC key to return to the previous page without changing",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   the keyboard type.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   ESC = 取消   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Please select a layout to be installed by default.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Press the UP or DOWN key to select the desired keyboard",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "    layout. Then press ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Press the ESC key to return to the previous page without changing",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   the keyboard layout.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = 继续   ESC = 取消   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY zhCNPrepareCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "安装程序正在准备您的计算机以复制 ReactOS 文件",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "正在创建文件复制列表...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY zhCNSelectFSEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "请选择下列文件系统：",
        0
    },
    {
        8,
        19,
        "\x07  Press UP or DOWN to select a file system.",
        0
    },
    {
        8,
        21,
        "\x07  请按 ENTER 格式化此分区。",
        0
    },
    {
        8,
        23,
        "\x07  请按 ESC 键选择其它分区。",
        0
    },
    {
        0,
        0,
        "ENTER = 继续   ESC = 取消   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },

    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNDeletePartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "您已选择即将删除此分区",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  按 D 删除该分区。",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "警告：原分区内所有内容都将丢失！",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  按 ESC 键返回。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "D = 删除分区   ESC = 取消   F3 = 退出",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY zhCNRegistryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " 安装程序 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "安装程序正在更新系统设置。",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "正在创建注册表文件...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR zhCNErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Success\n"
    },
    {
        // ERROR_NOT_INSTALLED
        "ReactOS is not completely installed on your\n"
        "computer. If you quit Setup now, you will need to\n"
        "run Setup again to install ReactOS.\n"
        "\n"
        "  \x07  Press ENTER to continue Setup.\n"
        "  \x07  Press F3 to quit Setup.",
        "F3 = 退出  ENTER = 继续"
    },
    {
        // ERROR_NO_HDD
        "Setup could not find a harddisk.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_NO_SOURCE_DRIVE
        "Setup could not find its source drive.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_LOAD_TXTSETUPSIF
        "Setup failed to load the file TXTSETUP.SIF.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CORRUPT_TXTSETUPSIF
        "Setup found a corrupt TXTSETUP.SIF.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_SIGNATURE_TXTSETUPSIF,
        "Setup found an invalid signature in TXTSETUP.SIF.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_DRIVE_INFORMATION
        "Setup could not retrieve system drive information.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_WRITE_BOOT,
        "Setup failed to install %S bootcode on the system partition.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_LOAD_COMPUTER,
        "Setup failed to load the computer type list.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_LOAD_DISPLAY,
        "Setup failed to load the display settings list.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_LOAD_KEYBOARD,
        "Setup failed to load the keyboard type list.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_LOAD_KBLAYOUT,
        "Setup failed to load the keyboard layout list.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_WARN_PARTITION,
        "Setup found that at least one harddisk contains an incompatible\n"
        "partition table that can not be handled properly!\n"
        "\n"
        "Creating or deleting partitions can destroy the partition table.\n"
        "\n"
        "  \x07  Press F3 to quit Setup.\n"
        "  \x07  Press ENTER to continue.",
        "F3 = 退出  ENTER = 继续"
    },
    {
        // ERROR_NEW_PARTITION,
        "You can not create a new Partition inside\n"
        "of an already existing Partition!\n"
        "\n"
        "  * Press any key to continue.",
        NULL
    },
    {
        // ERROR_DELETE_SPACE,
        "You can not delete unpartitioned disk space!\n"
        "\n"
        "  * Press any key to continue.",
        NULL
    },
    {
        // ERROR_INSTALL_BOOTCODE,
        "Setup failed to install the %S bootcode on the system partition.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_NO_FLOPPY,
        "驱动器 A: 中没有磁盘。",
        "ENTER = 继续"
    },
    {
        // ERROR_UPDATE_KBSETTINGS,
        "Setup failed to update keyboard layout settings.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_UPDATE_DISPLAY_SETTINGS,
        "Setup failed to update display registry settings.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_IMPORT_HIVE,
        "安装程序无法导入注册表文件。",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_FIND_REGISTRY
        "安装程序无法找到注册表文件。",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CREATE_HIVE,
        "安装程序无法创建注册表文件。",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_INITIALIZE_REGISTRY,
        "Setup failed to initialize the registry.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_INVALID_CABINET_INF,
        "Cabinet has no valid inf file.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CABINET_MISSING,
        "Cabinet not found.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CABINET_SCRIPT,
        "Cabinet has no setup script.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_COPY_QUEUE,
        "Setup failed to open the copy file queue.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CREATE_DIR,
        "Setup could not create the installation directories.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_TXTSETUP_SECTION,
        "Setup failed to find the '%S' section\n"
        "in TXTSETUP.SIF.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CABINET_SECTION,
        "Setup failed to find the '%S' section\n"
        "in the cabinet.\n",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_CREATE_INSTALL_DIR
        "Setup could not create the installation directory.",
        "ENTER = 重启计算机"
    },
    {
        // ERROR_WRITE_PTABLE,
        "安装程序无法写入分区表。\n"
        "ENTER = 重启计算机"
    },
    {
        // ERROR_ADDING_CODEPAGE,
        "Setup failed to add codepage to registry.\n"
        "ENTER = 重启计算机"
    },
    {
        // ERROR_UPDATE_LOCALESETTINGS,
        "安装程序无法设置区域。\n"
        "ENTER = 重启计算机"
    },
    {
        // ERROR_ADDING_KBLAYOUTS,
        "Setup failed to add keyboard layouts to registry.\n"
        "ENTER = 重启计算机"
    },
    {
        // ERROR_UPDATE_GEOID,
        "Setup could not set the geo id.\n"
        "ENTER = 重启计算机"
    },
    {
        // ERROR_DIRECTORY_NAME,
        "目录名称无效。\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        // ERROR_INSUFFICIENT_PARTITION_SIZE,
        "The selected partition is not large enough to install ReactOS.\n"
        "The install partition must have a size of at least %lu MB.\n"
        "\n"
        "  * Press any key to continue.",
        NULL
    },
    {
        // ERROR_PARTITION_TABLE_FULL,
        "You can not create a new primary or extended partition in the\n"
        "partition table of this disk because the partition table is full.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        // ERROR_ONLY_ONE_EXTENDED,
        "You can not create more than one extended partition per disk.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        // ERROR_FORMATTING_PARTITION,
        "Setup is unable to format the partition:\n"
        " %S\n"
        "\n"
        "ENTER = 重启计算机"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE zhCNPages[] =
{
    {
        SETUP_INIT_PAGE,
        zhCNSetupInitPageEntries
    },
    {
        LANGUAGE_PAGE,
        zhCNLanguagePageEntries
    },
    {
        WELCOME_PAGE,
        zhCNWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        zhCNIntroPageEntries
    },
    {
        LICENSE_PAGE,
        zhCNLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        zhCNDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        zhCNRepairPageEntries
    },
    {
        UPGRADE_REPAIR_PAGE,
        zhCNUpgradePageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        zhCNComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        zhCNDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        zhCNFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        zhCNSelectPartitionEntries
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        zhCNConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        zhCNSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        zhCNFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        zhCNDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        zhCNInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        zhCNPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        zhCNFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        zhCNKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        zhCNBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        zhCNLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        zhCNQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        zhCNSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        zhCNBootPageEntries
    },
    {
        REGISTRY_PAGE,
        zhCNRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING zhCNStrings[] =
{
    {STRING_PLEASEWAIT,
     "   请稍候..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = 安装   P = 创建主分区   E = 创建拓展分区   F3 = 退出"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = 安装   L = 创建逻辑分区   F3 = 退出"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = 安装   D = 删除分区   F3 = 退出"},
    {STRING_DELETEPARTITION,
     "   D = 删除分区   F3 = 退出"},
    {STRING_PARTITIONSIZE,
     "新分区大小:"},
    {STRING_CHOOSENEWPARTITION,
     "You have chosen to create a primary partition on"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "You have chosen to create an extended partition on"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "You have chosen to create a logical partition on"},
    {STRING_HDDSIZE,
    "Please enter the size of the new partition in megabytes."},
    {STRING_CREATEPARTITION,
     "   ENTER = 创建分区   ESC = 取消   F3 = 退出"},
    {STRING_PARTFORMAT,
    "This Partition will be formatted next."},
    {STRING_NONFORMATTEDPART,
    "You chose to install ReactOS on a new or unformatted Partition."},
    {STRING_NONFORMATTEDSYSTEMPART,
    "The system partition is not formatted yet."},
    {STRING_NONFORMATTEDOTHERPART,
    "The new partition is not formatted yet."},
    {STRING_INSTALLONPART,
    "Setup installs ReactOS onto Partition"},
    {STRING_CHECKINGPART,
    "Setup is now checking the selected partition."},
    {STRING_CONTINUE,
    "ENTER = 继续"},
    {STRING_QUITCONTINUE,
    "F3 = 退出  ENTER = 继续"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = 重启计算机"},
    {STRING_DELETING,
     "   正在删除文件: %S"},
    {STRING_MOVING,
     "   正在移动文件: %S to: %S"},
    {STRING_RENAMING,
     "   正在重命名文件: %S to: %S"},
    {STRING_COPYING,
     "   正在复制文件: %S"},
    {STRING_SETUPCOPYINGFILES,
     "安装程序正在复制文件..."},
    {STRING_REGHIVEUPDATE,
    "   Updating registry hives..."},
    {STRING_IMPORTFILE,
    "   正在导入 %S..."},
    {STRING_DISPLAYSETTINGSUPDATE,
    "   Updating display registry settings..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   正在更新区域设置..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   Updating keyboard layout settings..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   Adding codepage information to registry..."},
    {STRING_DONE,
    "   Done..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = 重新启动计算机"},
    {STRING_REBOOTPROGRESSBAR,
    " Your computer will reboot in %li second(s)... "},
    {STRING_CONSOLEFAIL1,
    "Unable to open the console\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "The most common cause of this is using an USB keyboard\r\n"},
    {STRING_CONSOLEFAIL3,
    "USB keyboards are not fully supported yet\r\n"},
    {STRING_FORMATTINGDISK,
    "Setup is formatting your disk"},
    {STRING_CHECKINGDISK,
    "Setup is checking your disk"},
    {STRING_FORMATDISK1,
    " Format partition as %S file system (quick format) "},
    {STRING_FORMATDISK2,
    " Format partition as %S file system "},
    {STRING_KEEPFORMAT,
    " Keep current file system (no changes) "},
    {STRING_HDINFOPARTCREATE_1,
    "%I64u %s  Harddisk %lu  (Port=%hu, Bus=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTCREATE_2,
    "%I64u %s  Harddisk %lu  (Port=%hu, Bus=%hu, Id=%hu) [%s]."},
    {STRING_HDDINFOUNK2,
    "   %c%c  Type 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE_1,
    "on %I64u %s  Harddisk %lu  (Port=%hu, Bus=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTDELETE_2,
    "on %I64u %s  Harddisk %lu  (Port=%hu, Bus=%hu, Id=%hu) [%s]."},
    {STRING_HDINFOPARTZEROED_1,
    "Harddisk %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu (%wZ) [%s]."},
    // {STRING_HDINFOPARTZEROED_2,
    // "Harddisk %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu [%s]."},
    {STRING_HDDINFOUNK4,
    "%c%c  Type 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS_1,
    "on Harddisk %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu (%wZ) [%s]."},
    // {STRING_HDINFOPARTEXISTS_2,
    // "on Harddisk %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu [%s]."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %sType %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT_1,
    "%6lu %s  Harddisk %lu  (Port=%hu, Bus=%hu, Id=%hu) on %wZ [%s]"},
    {STRING_HDINFOPARTSELECT_2,
    "%6lu %s  Harddisk %lu  (Port=%hu, Bus=%hu, Id=%hu) [%s]"},
    {STRING_NEWPARTITION,
    "Setup created a new partition on"},
    {STRING_UNPSPACE,
    "    %sUnpartitioned space%s           %6lu %s"},
    {STRING_MAXSIZE,
    "MB (max. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Extended Partition"},
    {STRING_UNFORMATTED,
    "New (Unformatted)"},
    {STRING_FORMATUNUSED,
    "Unused"},
    {STRING_FORMATUNKNOWN,
    "Unknown"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "Adding keyboard layouts"},
    {0, 0}
};
