//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPModelSocialPerson, NSArray, NSData, NSString;

@protocol MPStoreSocialRequestOperationDataSource <NSObject>
@property(retain, nonatomic) MPModelSocialPerson *person;
- (NSArray *)queryItems;
- (int)httpMethod;
- (int)httpBodyType;
- (NSData *)httpBody;
- (NSString *)bagKey;

@optional
- (NSString *)fallbackURLString;
- (NSArray *)fallbackBagKeys;
@end

