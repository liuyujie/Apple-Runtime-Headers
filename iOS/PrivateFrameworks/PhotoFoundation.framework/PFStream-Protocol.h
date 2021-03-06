//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLocking.h"
#import "NSObject.h"

@class NSError;

@protocol PFStream <NSObject, NSLocking>
- (unsigned long long)preferredStreamBlockSize;
- (NSError *)getStreamError;
- (_Bool)advanceStream:(long long)arg1 distanceMoved:(long long *)arg2;
- (_Bool)advanceStream;
- (_Bool)rewindStream:(long long)arg1;
- (_Bool)rewindStream;
- (long long)streamPosition;
- (long long)streamLength;
- (void)closeStream;
- (_Bool)openStream;
@end

