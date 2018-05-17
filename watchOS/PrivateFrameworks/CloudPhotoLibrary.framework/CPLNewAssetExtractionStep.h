//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep
{
    NSMutableSet *_alreadySeenMasterIdentifiers;
    unsigned int _maximumCount;
}

@property(readonly, nonatomic) unsigned int maximumCount; // @synthesize maximumCount=_maximumCount;
- (void).cxx_destruct;
- (id)shortDescription;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned int)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1 maximumCount:(unsigned int)arg2;

@end
