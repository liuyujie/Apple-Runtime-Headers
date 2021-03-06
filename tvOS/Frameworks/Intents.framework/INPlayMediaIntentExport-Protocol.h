//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INMediaItem, NSArray, NSDate, NSNumber, NSString;

@protocol INPlayMediaIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *recoID;
@property(copy, nonatomic) NSArray *buckets;
@property(copy, nonatomic) NSDate *expirationDate;
@property(copy, nonatomic) NSNumber *resumePlayback;
@property(nonatomic) long long playbackRepeatMode;
@property(copy, nonatomic) NSNumber *playShuffled;
@property(copy, nonatomic) INMediaItem *mediaContainer;
@property(copy, nonatomic) NSArray *mediaItems;
- (id)init;
@end

