//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol NFNdefMessage <NSObject>
@property(readonly, nonatomic) NSArray *records;
- (NSString *)decode;
- (void)addRecord:(id <NFNdefRecord>)arg1;
- (NSData *)asData;
- (id)initWithNDEFMessage:(id <NFNdefMessage>)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
@end

