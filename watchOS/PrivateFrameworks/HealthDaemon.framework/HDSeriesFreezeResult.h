//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface HDSeriesFreezeResult : NSObject
{
    int _status;
    NSUUID *_frozenIdentifier;
}

@property(readonly, copy, nonatomic) NSUUID *frozenIdentifier; // @synthesize frozenIdentifier=_frozenIdentifier;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithStatus:(int)arg1 frozenIdentifier:(id)arg2;

@end

