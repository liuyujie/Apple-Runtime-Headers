//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (TMDiskArbiterAdditions)
+ (id)tm_errorWithDADissenterRef:(struct __DADissenter *)arg1;
- (int)tm_dissenterPID;
- (struct __DADissenter *)tm_dissenterRef;
- (BOOL)tm_isDiskArbitrationError;
@end

