// Fill out your copyright notice in the Description page of Project Settings.

#include "File.h"

bool UFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

bool UFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}
