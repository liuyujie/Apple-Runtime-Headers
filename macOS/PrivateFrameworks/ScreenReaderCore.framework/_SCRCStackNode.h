//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _SCRCStackNode : NSObject
{
    id _object;
    _SCRCStackNode *_prev;
    _SCRCStackNode *_next;
}

@property(retain, nonatomic) _SCRCStackNode *next; // @synthesize next=_next;
@property(retain, nonatomic) _SCRCStackNode *prev; // @synthesize prev=_prev;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;

@end

