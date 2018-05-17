//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFAccessoryVendor.h"
#import "NSObject.h"

@class HFRoomBuilder, NAFuture, NSArray, NSString;

@protocol HFServiceLikeBuilder <HFAccessoryVendor, NSObject>
@property(retain, nonatomic) HFRoomBuilder *room;
@property(readonly, nonatomic) _Bool supportsFavoriting;
@property(readonly, nonatomic) NSString *originalName;
@property(copy, nonatomic) NSString *name;
- (NAFuture *)removeItemFromHome;

@optional
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property(nonatomic) _Bool isFavorite;
@end
