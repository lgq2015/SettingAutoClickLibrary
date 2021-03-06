//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSMutableData, NSOutputStream, NSString;

@interface ICPeerOutputStream : NSObject <NSStreamDelegate>
{
    NSOutputStream *_outputStream;
    NSMutableData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeData;
- (void)writeMessageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

