//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLKMeansClustering : PLDataClustering
{
    unsigned int _k;
}

@property(nonatomic) unsigned int k; // @synthesize k=_k;
- (double *)_dataArray:(id)arg1 featureCount:(unsigned int)arg2 useKeypaths:(_Bool)arg3;
- (id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end

