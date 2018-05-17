//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@protocol ICSQLiteBinding <NSObject>
- (int)clearBindings;
- (void)bindStringCopy:(NSString *)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(NSData *)arg1 atPosition:(int)arg2;
- (void)bindString:(NSString *)arg1 atPosition:(int)arg2;
- (void)bindData:(NSData *)arg1 atPosition:(int)arg2;
- (void)bindNumber:(NSNumber *)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
@end
