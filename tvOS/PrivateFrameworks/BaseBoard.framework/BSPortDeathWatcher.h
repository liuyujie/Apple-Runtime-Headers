//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BaseBoard/BSPortDeathSentinel.h>

@interface BSPortDeathWatcher : BSPortDeathSentinel
{
}

- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;

@end
