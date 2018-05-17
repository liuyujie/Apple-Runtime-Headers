//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MSVLRUDictionaryNode : NSObject <NSCopying>
{
    id _key;
    id _object;
    MSVLRUDictionaryNode *_next;
    MSVLRUDictionaryNode *_prev;
}

@property(nonatomic) __weak MSVLRUDictionaryNode *prev; // @synthesize prev=_prev;
@property(nonatomic) __weak MSVLRUDictionaryNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
