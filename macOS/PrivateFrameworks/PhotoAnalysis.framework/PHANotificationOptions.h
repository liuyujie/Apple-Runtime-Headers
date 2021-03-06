//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString, PHAsset;

@interface PHANotificationOptions : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_bodyText;
    NSDate *_deliveryDate;
    NSDate *_expirationDate;
    NSDictionary *_userInfo;
    PHAsset *_keyAsset;
    NSString *_collectionUUID;
}

@property(retain, nonatomic) NSString *collectionUUID; // @synthesize collectionUUID=_collectionUUID;
@property(retain, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *deliveryDate; // @synthesize deliveryDate=_deliveryDate;
@property(retain, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

