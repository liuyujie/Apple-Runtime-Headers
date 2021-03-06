//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSAsynchronousOperation.h"

@class NSDictionary, NSError, NSOperation, NSString;

__attribute__((visibility("hidden")))
@interface TVHKStoreSearchOperation : TVHSAsynchronousOperation
{
    NSDictionary *_results;
    NSError *_error;
    NSString *_searchTerm;
    unsigned long long _searchType;
    NSOperation *_connectionRequestOperation;
}

+ (id)_clientApplicationParameterValueForSearchType:(unsigned long long)arg1;
@property(retain, nonatomic) NSOperation *connectionRequestOperation; // @synthesize connectionRequestOperation=_connectionRequestOperation;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithSearchTerm:(id)arg1 andType:(unsigned long long)arg2;
- (id)init;

@end

