//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEOCacheUsageMonitor_TileCacheData : NSObject
{
    unsigned int _count;
    unsigned int _byteCount;
    NSMutableDictionary *_errorsDict;
}

@property(nonatomic) unsigned int byteCount; // @synthesize byteCount=_byteCount;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *errors;
- (void)addErrorWithDomain:(id)arg1 code:(int)arg2;
- (_Bool)wouldWrapWithByteCount:(unsigned int)arg1;
- (id)init;

@end

