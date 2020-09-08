#!lua
solution "Rec0ver_H4rv4rd"

    configurations { "Debug", "Release" }

    project "Rec0ver Program"
        basedir "./"
        language "C"

        files {
            "src/recover.c"
        }

        kind "ConsoleApp"     
        targetname "recover"
        targetdir "build/debug"

        configuration "Debug"
            defines {"DEBUG"}
            Symbols "On"

        configuration "Release"
            defines {"NDEBUG"}
            Optimize "On" 