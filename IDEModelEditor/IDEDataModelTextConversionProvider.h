/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTDiffTextFilter-Protocol.h"

@interface IDEDataModelTextConversionProvider : NSObject <DVTDiffTextFilter>
{
}

+ (BOOL)filterInputFilePath:(id)arg1 toOutputFilePath:(id)arg2 error:(id *)arg3;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

@end

