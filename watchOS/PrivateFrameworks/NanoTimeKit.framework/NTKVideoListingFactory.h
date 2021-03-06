//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKDevice, NSArray, NSMutableSet;

@interface NTKVideoListingFactory : NSObject
{
    CLKDevice *_device;
    NSArray *_butterflyListings;
    NSArray *_jellyfishListings;
    NSArray *_flowerListings;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)discardAssets;
- (void)setVideoListingHasAssets:(id)arg1;
- (id)_listingsWithTheme:(unsigned int)arg1 notMatchingVariant:(int)arg2 matchingTag:(unsigned int)arg3;
- (id)_listingsWithTheme:(unsigned int)arg1 variant:(int)arg2 tag:(unsigned int)arg3 notMatchingClip:(int)arg4;
- (id)_listingWithTheme:(unsigned int)arg1 variant:(int)arg2 tag:(unsigned int)arg3;
- (id)_listingsWithTheme:(unsigned int)arg1 notMatchingVariant:(int)arg2;
- (id)_listingsWithTheme:(unsigned int)arg1 variant:(int)arg2;
- (id)_listingsWithTheme:(unsigned int)arg1;
- (id)_initLibraryForDevice:(id)arg1;
- (int)behaviorForTheme:(unsigned int)arg1;
- (id)posterImageWithTheme:(unsigned int)arg1;
- (id)anyListingWithTheme:(unsigned int)arg1 notMatchingVariant:(int)arg2 matchingTag:(unsigned int)arg3;
- (id)anyListingWithTheme:(unsigned int)arg1 variant:(int)arg2 tag:(unsigned int)arg3 notMatchingClip:(int)arg4;
- (id)anyListingWithTheme:(unsigned int)arg1 variant:(int)arg2 tag:(unsigned int)arg3;
- (id)defaultListingWithTheme:(unsigned int)arg1;

@end

