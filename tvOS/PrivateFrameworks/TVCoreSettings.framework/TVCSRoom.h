//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMRoom, NSString;

@interface TVCSRoom : NSObject
{
    HMRoom *_hmRoom;
}

+ (id)_roomWithHMRoom:(id)arg1;
@property(retain, nonatomic) HMRoom *hmRoom; // @synthesize hmRoom=_hmRoom;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *name;

@end

