//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedListNode : NSObject
{
    AMSDoubleLinkedListNode *_previous;
    id _object;
    AMSDoubleLinkedListNode *_next;
    NSString *_listIdentifier;
}

@property(retain) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(retain) AMSDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain) id object; // @synthesize object=_object;
@property(retain) AMSDoubleLinkedListNode *previous; // @synthesize previous=_previous;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (id)init;

@end
