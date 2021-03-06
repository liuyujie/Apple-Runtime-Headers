//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@protocol VSAuthenticationToken <NSObject>
@property(readonly, copy, nonatomic) NSData *serializedData;
@property(copy, nonatomic) NSString *body;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (BOOL)isValid;
- (BOOL)isOpaque;
- (id)initWithSerializedData:(NSData *)arg1;
@end

