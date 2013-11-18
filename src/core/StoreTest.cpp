#include "../n64/test.h"
#include "Store.h"

void TestStore() {
	std::vector<char> bytes;

	MemoryStore store(bytes);

	{
		std::auto_ptr<Writer> writer = store.getWriter();
		const size_t n = writer->write("foobar", 2, 2);
		assertEquals(2, n);
	}

	std::auto_ptr<Reader> reader = store.getReader();
	char buffer[60];
	buffer[2] = 0;
	size_t nr = reader->read(buffer, 2, 1);
	assertEquals(1, nr);
	assertStringEquals("fo", buffer);
	nr = reader->read(buffer, 2, 1);
	assertEquals(1, nr);
	assertStringEquals("ob", buffer);
}
