//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TNChartFormulaTypeEnumerator : NSObject
{
    NSArray *_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (unsigned long long)nextFormulaType;
- (id)initWithChartFormulaStorage:(id)arg1;

@end

