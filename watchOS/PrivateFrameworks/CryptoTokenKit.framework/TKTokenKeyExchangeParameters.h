//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject
{
    int _requestedSize;
    NSData *_sharedInfo;
}

@property(readonly, copy) NSData *sharedInfo; // @synthesize sharedInfo=_sharedInfo;
@property(readonly) int requestedSize; // @synthesize requestedSize=_requestedSize;
- (void).cxx_destruct;
- (id)initWithXpcDictionary:(id)arg1;

@end

