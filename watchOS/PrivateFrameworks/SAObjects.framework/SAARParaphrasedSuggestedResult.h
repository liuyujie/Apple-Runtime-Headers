//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedSuggestedResult : SAAceView
{
}

+ (id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)paraphrasedSuggestedResult;
@property(nonatomic) int rank;
@property(copy, nonatomic) NSString *displayText;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

