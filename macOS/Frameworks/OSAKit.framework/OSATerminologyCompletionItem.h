//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSACompletionItem.h"

@class NSString;

@interface OSATerminologyCompletionItem : NSObject <OSACompletionItem>
{
    NSString *_terminology;
}

- (id)icon;
- (id)descriptionText;
- (id)completionText;
- (id)displayText;
- (id)name;
- (void)dealloc;
- (id)initWithTerminology:(id)arg1;

@end
