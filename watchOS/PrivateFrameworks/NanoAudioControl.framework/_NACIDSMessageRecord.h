//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PBCodable;

__attribute__((visibility("hidden")))
@interface _NACIDSMessageRecord : NSObject
{
    PBCodable *_message;
    int _type;
    NSString *_queueOne;
    double _timeout;
}

@property(copy, nonatomic) NSString *queueOne; // @synthesize queueOne=_queueOne;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) PBCodable *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end
