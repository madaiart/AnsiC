# This makefile created in powershell
# Author: Madai Arteaga
# Date: 21/04/2021

# Objetive: This file compiles and create all executables in "buid" folder. 
#           The source code must be at the same level

# ##########
# Variables
#
$SrcPath = Get-Location
$BuildPath = Join-Path -Path $SrcPath -ChildPath "builds"

# Create folder if doesn't exists
if (!(Test-Path $BuildPath)) {
    New-Item -Path $SrcPath -Name "builds" -ItemType "directory"    
}

# Find .C items
$CFiles =  Get-ChildItem *.c

# $SrcPath
# $BuildPath
# $CFiles


# Compile each element
foreach ($item in $CFiles) {
    $file = Join-Path -Path $BuildPath -ChildPath $item.Name
    $file = $file.Substring(0, $file.Length -2) + ".exe"

    Write-Output "Compilando archivo: $($item.Name)" 
    gcc -o $file $item.Name 
}