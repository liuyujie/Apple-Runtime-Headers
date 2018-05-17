//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import "HKDateRangeDataUpdateDelegate.h"

@class NSMutableDictionary;

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate>
{
    id <HKDateRangeDataSourceDelegate> _sourceDelegate;
    NSMutableDictionary *_pathToDataBlock;
}

@property(retain, nonatomic) NSMutableDictionary *pathToDataBlock; // @synthesize pathToDataBlock=_pathToDataBlock;
@property(readonly, nonatomic) id <HKDateRangeDataSourceDelegate> sourceDelegate; // @synthesize sourceDelegate=_sourceDelegate;
- (void).cxx_destruct;
- (void)dateRangeDataUpdated;
- (id)_fetchAndCacheDataForPath:(CDStruct_48c31d0d)arg1;
- (void)invalidateCache;
- (void)blocksRequestedFromPath:(CDStruct_48c31d0d)arg1 toPath:(CDStruct_48c31d0d)arg2;
- (id)cachedBlockForPath:(CDStruct_48c31d0d)arg1 context:(id)arg2;
- (id)initWithSourceDelegate:(id)arg1;

@end
