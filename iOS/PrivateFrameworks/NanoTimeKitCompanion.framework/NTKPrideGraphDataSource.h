//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKDevice, NSArray, NSDictionary;

@interface NTKPrideGraphDataSource : NSObject
{
    CLKDevice *_device;
    NSArray *_startListings;
    NSDictionary *_allListings;
    NSDictionary *_listingsByTag;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_loadListings;
- (id)randomListingWithTag:(id)arg1;
- (id)randomInitialListing;
- (id)_randomListingFromArray:(id)arg1;
- (id)listings;
- (id)initForDevice:(id)arg1;

@end
