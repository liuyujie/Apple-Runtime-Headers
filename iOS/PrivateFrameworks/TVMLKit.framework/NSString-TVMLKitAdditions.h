//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TVMLKitAdditions)
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;
+ (id)tv_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)tv_SHA256String;
- (id)tv_MD5String;
- (id)tv_filenameSafeString;
@end
