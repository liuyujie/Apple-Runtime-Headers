//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSSimpleAttributeDictionary;

__attribute__((visibility("hidden")))
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator
{
    NSSimpleAttributeDictionary *dictionary;
    unsigned int nextElement;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithAttributeDictionary:(id)arg1;

@end

