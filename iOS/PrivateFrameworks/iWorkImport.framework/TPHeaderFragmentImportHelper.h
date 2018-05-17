//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TPHeaderFragmentImportHelper : NSObject
{
    id *_fragments;
    TSPObjectContext *_storageContext;
    TSPObjectContext *_objectsContext;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_nonWhitespaceCharacterSet;
}

- (void).cxx_destruct;
- (void)processFragmentsForSpaceFormatting;
- (void)p_splitStorageInThree:(long long)arg1 withRanges:(struct _NSRange [2])arg2;
- (void)p_splitStorageInTwo:(long long)arg1 withRanges:(struct _NSRange [2])arg2 firstTarget:(long long)arg3 secondTarget:(long long)arg4;
- (unsigned long long)countOfWhitespaceRunsInString:(id)arg1 ranges:(struct _NSRange [2])arg2;
- (_Bool)p_storageIsEffectivelyEmpty:(id)arg1;
- (id)initWithFragments:(id *)arg1 storageContext:(id)arg2 objectsContext:(id)arg3;

@end
