//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PSICollectionResult.h>

@class NSArray;

@interface PSITripResult : PSICollectionResult
{
    NSArray *_momentUUIDs;
}

@property(readonly, copy, nonatomic) NSArray *momentUUIDs; // @synthesize momentUUIDs=_momentUUIDs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTrip:(id)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 momentUUIDs:(id)arg7 numberOfAssets:(unsigned int)arg8 sortDate:(id)arg9;

@end

