#import <Cocoa/Cocoa.h>
#import "AsyncUdpSocket.h"


@interface AppDelegate : NSObject <NSApplicationDelegate>
{
	long tag;
	AsyncUdpSocket *udpSocket;
}

@property (assign) IBOutlet NSWindow *window;

@property  IBOutlet NSTextField * addrField;
@property  IBOutlet NSTextField * portField;
@property  IBOutlet NSTextField * messageField;
@property  IBOutlet NSTextField * alertField;
@property  IBOutlet NSTextField * tokenField;
@property  IBOutlet NSTextField * badgeField;
@property  IBOutlet NSTextField * soundField;

@property  IBOutlet NSButton    * sendButton;
@property  IBOutlet NSTextView  * logView;

@end
