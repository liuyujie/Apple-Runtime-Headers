//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXAssetsDataSource.h"

@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource
{
    PUAssetsDataSource *__reviewAssetsDataSource;
}

@property(readonly, nonatomic) PUAssetsDataSource *_reviewAssetsDataSource; // @synthesize _reviewAssetsDataSource=__reviewAssetsDataSource;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithReviewAssetsDataSource:(id)arg1;

@end
