//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQuery : SPQueryTask
{
    NSArray *_mutableSections;
    unsigned long long _queryID;
}

+ (void)initialize;
@property unsigned long long queryID; // @synthesize queryID=_queryID;
- (void).cxx_destruct;
- (id)unsafeSessionEntityString;
- (id)unsafeSections;
- (void)start;
- (void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3;

@end

